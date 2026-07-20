#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of vertex:";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int adj[n][n]={0};
    int p2[n][n]={0};
    int p3[n][n]={0};
    int p4[n][n]={0};
    vector<int>a1,a2,a3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
            p2[i][j]=0;p3[i][j]=0;p4[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                p2[i][j]+=adj[i][k]*adj[k][j];
               
            }
             a1.push_back(p2[i][j]);
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                p3[i][j]+=p2[i][k]*adj[k][j];
                 
            }
            a2.push_back(p3[i][j]);
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                p4[i][j]+=p3[i][k]*adj[k][j];
                
            }
             a3.push_back(p4[i][j]);
        }
    }
    cout<<"Length 2: "<<endl;
    for(int i=0;i<a1.size();i++){
        cout<<a1[i]<<" ";
        if((i+1)%n==0)cout<<endl;
    }cout<<"Length 3: "<<endl;
    for(int i=0;i<a1.size();i++){
        cout<<a2[i]<<" ";
        if((i+1)%n==0)cout<<endl;
    }cout<<"Length 4: "<<endl;
    for(int i=0;i<a1.size();i++){
        cout<<a3[i]<<" ";
        if((i+1)%n==0)cout<<endl;
    }





    return 0;
}
