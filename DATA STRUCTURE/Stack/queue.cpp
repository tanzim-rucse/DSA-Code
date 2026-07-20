#include<bits/stdc++.h>
using namespace std;

const int maxsize=10;
int q[maxsize];
int front =-1,rear=-1;

void push(int n){
    if(rear==maxsize-1)cout<<"overflowed"<<endl;
   
    else{
         if(front==-1)front=0;
        q[++rear]=n;
    }
}

void pop(){
    if(front==-1 || front>rear)cout<<"Underflow"<<endl;
    else{
        front++;
    }
}



int main(){
    push(5);
    push(3);
    push(1);
    pop();

    for(int i=front;i<=rear;i++){
        cout<<q[i]<<" ";
    }
    return 0;
}