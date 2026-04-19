#include<bits/stdc++.h>
using namespace std;

void delete_karim(string arr[],int &n,string item){
    int k=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            k=i;
            break;
        }
    }
    if(k!=-1){
        for(int i=k;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    else{
        cout<<"Item not found"<<endl;
    }
}


void pos_del_string(string arr[],int &n,int pos){
    
    if(pos<0 || pos>=n){
        cout<<"Invalid position"<<endl;
        return;
    }


    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;


}








int main(){
    string sorted_array[10]={"Aarim","Barim","Karim","Larim","Rarim"};
    int n=5;
    delete_karim(sorted_array,n,"Karim");

    pos_del_string(sorted_array,n,2);
    
    return 0;
}