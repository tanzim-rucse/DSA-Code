#include<bits/stdc++.h>
using namespace std;

const int tablesize=11;


//Using the LinearProbing inserted data into the Hash Table
void Linear_Probing(vector<int> & hashTable, int value){
    int index = value % tablesize;
    while(hashTable[index]!=-1){
        index=(index+1) % tablesize;
    }
    hashTable[index]=value;
}

void Linear_Proving_Search(vector<int>&hashTable,int value){
    int index=value% tablesize;
    int start=index;
    while(hashTable[index]!=value){
        index=(index+1) % tablesize;
        if(index==start){
            cout<<"Value Not Found In The Hash Table"<<endl;
            return;
        }    
    }
    cout<<"Value Found in index :: "<<index<<endl;
}

void Plus_3_Probing(vector<int> & hashTable, int value){
    int index = value % tablesize;
    while(hashTable[index]!=-1){
        index=(index+3) % tablesize;
    }
    hashTable[index]=value;
}

void Plus_3_Proving_Search(vector<int>&hashTable,int value){
    int index=value% tablesize;
    int start=index;
    while(hashTable[index]!=value){
        index=(index+3) % tablesize;
        if(index==start){
            cout<<"Value Not Found In The Hash Table"<<endl;
            return;
        }
           
    }
    cout<<"Value Found in index :: "<<index<<endl;


}

void Quadratic_Probing(vector<int> & hashTable, int value){
    int hash=value % tablesize;
    int index = hash;
    int i=0;
    while(hashTable[index]!=-1){
        index=(hash+i*i) % tablesize;
        i++;
    }
    hashTable[index]=value;
}

void Quadratic_Proving_Search(vector<int>& hashTable, int value) {
    int hash = value % tablesize;
    int i = 0;

    while (i < tablesize) {
        int index = (hash + i * i) % tablesize;

        if (hashTable[index] == -1) {
            cout << "Value Not Found In The Hash Table" << endl;
            return;
        }

        if (hashTable[index] == value) {
            cout << "Value Found in index :: " << index << endl;
            return;
        }

        i++;
    }

    cout << "Value Not Found In The Hash Table" << endl;
}

void Chaining_Insert(vector<vector<int>>& hashTable, int value) {
    int index = value % tablesize;
    hashTable[index].push_back(value);  // add to the vector at that index
}

void Chaining_Search(vector<vector<int>>& hashTable, int value) {
    int index = value % tablesize;
    for (int val : hashTable[index]) {
        if (val == value) {
            cout << "Value Found at index :: " << index << endl;
            return;
        }
    }
    cout << "Value Not Found In The Hash Table" << endl;
}

int main(){
    
    vector<int> data = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    vector<int>hashTable(tablesize,-1); /// i am declearing the size of hash table 11.
    vector<vector<int>> HASHTABLE(tablesize); // vector of vectors
    cout<<"What do you want to do??"<<endl;
    int k;
    cin>>k;
    switch (k)
    {
    case 1:
          for(int value: data){
             Linear_Probing(hashTable, value);
          }
        break;

    case 2:
          for(int value: data){
             Plus_3_Probing(hashTable, value);
          }
      break;
    case 3:
          for(int value: data){
             Quadratic_Probing(hashTable, value);
          }
      break;
    case 4:
          
          for(int value: data){
             Chaining_Insert(HASHTABLE, value);
          }
      break;

    

    default:
          cout<<"Exiting"<<endl;
        break;
    } 
  





    return 0;
}