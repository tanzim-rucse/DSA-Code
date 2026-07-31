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
vector<int>lps_Vec;
void LPS_Construct(string pattern){
    int n=pattern.length();
    int i=1;
    int len=0;
    lps_Vec.resize(n+1);
    lps_Vec[len]=0;
       
    while(i<n){
        if(pattern[len]==pattern[i]){
            len++;
            lps_Vec[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps_Vec[len-1];
            }
            else{
                lps_Vec[i]=len;
                i++;
            }
        }

    }
}



int solve() {
    string text,pattern;
    cin>>text>>pattern;
    LPS_Construct(pattern);
    int n=text.length();
    int m=pattern.length();
    
    int i=0,j=0;    
    while(i<n){
        if(text[i]==pattern[j]){
            i++;
            j++;
            if(j==m)break;
        }
        else{
            if(j!=0){
                j=lps_Vec[j-1];
            }
            else{
                i++;
            }
        }

    }
    if(j==m){
        cout<<"YES"<<Endl;
    }
    else{
        cout<<"NO"<<Endl;
    }

return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}