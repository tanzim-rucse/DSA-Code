#include<bits/stdc++.h>
using namespace std;
const int tablesize=11;

int  characterfunc(string  key){
    int sum=0;
    for(int i=0;i<key.size();i++){
        sum+=int (key[i]);
    }
    return sum%tablesize;


}


void insert(string key,vector<string>&hashtable){
    int index=characterfunc(key);
    int hash=index;
    int i=0;
    while(hashtable[index]!='-1' ){ 
        index=(index+i)%tablesize;
    }
    hashtable[index]=key;
}


int main(){
    vector<string>hashtable(tablesize);
    for(int i=0;i<tablesize;i++){
        hashtable[i]='-1';
    }
    cout<<"Enter number of elements:"<<endl;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string key;cin>>key;
        insert(key,hashtable);
    }

    return 0;
}