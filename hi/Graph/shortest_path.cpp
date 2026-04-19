#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX



void warshall(vector<vector<int>> &adj, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==0)adj[i][j]=inf;
        }
    }





    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][k]!=inf && adj[k][j]!=inf )
                adj[i][j] = min(adj[i][j] , ((adj[i][k] + adj[k][j])));
            }
        }
    }
}

void print(vector<vector<int>> &adj, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==inf)cout<<"inf"<<" ";
            else
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "How many nodes? ";
    cin >> n;

    vector<vector<int>>adj(n,vector<int>(n));

    cout << "Enter the matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> adj[i][j];
        }
    }

    warshall(adj, n);
    print(adj, n);

    return 0;
}