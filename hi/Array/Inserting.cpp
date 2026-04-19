#include<bits/stdc++.h>
using namespace std;

void insertAt(int arr[],int &n, int item){
    int i=n-1;
    while(i>=0 && arr[i]>item){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=item;
    n++;
}
void insert_string(string arr[],int &n,string s){
    int i=n-1;
    while(i>=0 && arr[i]>s){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=s;
    n++;
}

void pos_ins_int(int arr[], int &n,int pos,int item){
    int i=n-1;
    while(i>=0 && i>=pos){
        arr[i+1]=arr[i];
        i--;
    }
    arr[pos]=item;
    n++;
}

void pos_ins_string(string arr[],int &n,int pos,string item){
    int i=n-1;
    while(i>=0 && i>=pos){
        arr[i+1]=arr[i];
        i--;
    }
    arr[pos]=item;
    n++;
}



int main(){
    int sorted_array[10]={1,2,3,4,5,6,7,8};
    int n=8,item=54;
    insertAt(sorted_array,n,54);

    pos_ins_int(sorted_array,n,5,99);
    
    string str_sorted_array[10]={"Abid","banana","apple","grape","orange","pinaple","tazim"};
    int k=7;
    insert_string(str_sorted_array,k,"Karim");

    pos_ins_string(str_sorted_array,k,5,"karim");

    for(int i=0;i<k;i++){
        cout<<str_sorted_array[i]<<" ";
    }

    return 0;
}