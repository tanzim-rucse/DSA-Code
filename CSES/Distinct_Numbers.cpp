#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        long long int  a;cin>>a;
        m[a]++;
    }
    cout<<m.size()<<endl;
    return 0;
}