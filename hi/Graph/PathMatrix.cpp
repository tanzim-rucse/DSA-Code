#include<bits/stdc++.h>
using namespace std;

void warshall(vector<vector<int>> &adj, int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
            }
        }
    }
}

void print(vector<vector<int>> &adj, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "How many nodes? ";
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));

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