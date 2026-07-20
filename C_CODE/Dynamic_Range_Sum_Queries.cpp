#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define pb push_back
#define ff first
#define ss second
#define int long long int
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define Endl "\n"
vector<int>tree,a;
void segTree(vector<int>&a,int idx,int l,int h){
    if(l==h){
        tree[idx]=a[l];
        return ;
    }
    int mid=(l+h)/2;
    segTree(a,idx*2+1,l,mid);
    segTree(a,idx*2+2,mid+1,h);
    tree[idx]=tree[idx*2 +1] +tree[idx*2+2];
}


int query(int idx,int low,int high,int ql,int qh){
    if(low>qh || high<ql)return 0;
    if(low>=ql && high<=qh){
        return tree[idx];
    }
    int mid=(low+high)/2;
    int a=query(idx*2+1,low,mid,ql,qh);
    int b=query(idx*2+2,mid+1,high,ql,qh);
    return a+b;  
}

void update(int idx,int l, int h,int pos,int val){
    if(l==h){
        tree[idx]=val;
        a[l]=val;
        return;        
    }
    int mid=(l+h)/2;
    if(pos<=mid){
        update(idx*2+1,l,mid,pos,val);
    }
    else{
        update(idx*2+2,mid+1,h,pos,val);
    }
    tree[idx]=tree[idx*2+1]+tree[idx*2+2];
}
int solve() {
    int n,quer;cin>>n>>quer;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    tree.resize(4*n);
    segTree(a,0,0,n-1);
    for(int i=0;i<quer;i++){
        int m,p,q;
        cin>>m>>p>>q;
        if(m==1){
            p--;
            update(0,0,n-1,p,q);
        }
        else{
            p--,q--;
            int ans=query(0,0,n-1,p,q);
            cout<<ans<<Endl;
        }
    }



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}