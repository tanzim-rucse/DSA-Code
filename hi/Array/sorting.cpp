#include<bits/stdc++.h>
using namespace std;

void sort_int(int arr[],int &n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void sort_string(vector<string>&arr  ,int &n){  // Pass vector by reference
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}








int main(){
    int arr_int[10]={2,8,7,4,6,8,1,9,3,5};
    int n =10;
    sort_int(arr_int,n);
    int p=5;
    vector<string>arr_str={"I", "Tanzim","Hello","am","Hi"};
    sort_string(arr_str,p);
    
    return 0;
}