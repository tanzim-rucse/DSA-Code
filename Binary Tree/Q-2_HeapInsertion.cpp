#include<bits/stdc++.h>
using namespace std;
#define MAX 100

void heapify(int a[], int n, int i){

    int parent = (i-1)/2;

    if(a[parent] > 0){

        if(a[i] > a[parent]){
            swap(a[i], a[parent]);
            heapify(a, n, parent);
        }
    }
}

void insert(int a[], int &n, int key){

    n = n + 1;
    a[n-1] = key;
    
    heapify(a,n,n-1);
}

void display(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    //Existing Heap
    int a[MAX] = {20, 15, 10, 5, 3};

    int n = 5;

    while(1){
        cout<<"Press 1 to insert node into an existing heap\nPress 2 to quit\n";
        int com;
        cin>>com;
        if(com == 1){
            int x;
            cin>>x;
            insert(a, n, x);
        }
        else
            break;
    }

    display(a, n);

    return 0;


}