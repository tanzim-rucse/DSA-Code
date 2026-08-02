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
vector<int>arr,segment;
int segment_size;
void init(){
    int n=arr.size();
    int seg_no=-1;
    segment_size=sqrt(n);
    int i=0;

    while(i<n){
        if(i%segment_size==0){
            seg_no++;
        }
        segment[seg_no]+=arr[i];
        i++;
    }
}

void query(){
    int l,r;cin>>l>>r;
    int sum=0;
    while(l<=r && l%segment_size!=0){
        sum+=arr[l];
    }
    while(l+segment_size<=r){
        sum+=segment[l/segment_size];
        l+=segment_size;
    }

    while(l<=r){
        sum+=arr[l];
        l++;
    }
    cout<<sum<<endl;
}

void update(){
    int idx,val;cin>>idx>>val;
    segment[idx/segment_size]-=arr[idx];
    segment[idx/segment_size]+=val;
    // arr[idx]=val;
}



int solve() {
    int n;cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    segment.resize(n);
    init();
    int q;cin>>q;
    while(q--){
        int a;
    }

return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}