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
int solve() {
    int n,q;cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int blocksize;
    blocksize=sqrt(n);
    int number_ob_block=(n+blocksize-1)/blocksize;
    vector<int>brr(number_ob_block+1,0);
    for(int i=0;i<n;i++){
        brr[i/blocksize]+=arr[i];
    }
    for(int i=0;i<q;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        int sum=0;
        for(int i=a;i<=b;){
            if(i%blocksize==0 && i+blocksize-1<=b){
                sum+=brr[i/blocksize];
                i+=blocksize;
            }
            else{
                sum+=arr[i];
                i++;
            }    
        }
        cout<<sum<<endl;

      }
    



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}