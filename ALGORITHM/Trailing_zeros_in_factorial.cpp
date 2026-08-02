#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int zeros=0;
    while(n>0){
        n/=5;
        zeros+=n;
    }
    cout<<zeros<<endl;


    return 0;
}