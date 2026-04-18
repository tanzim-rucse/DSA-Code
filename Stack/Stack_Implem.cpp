#include<bits/stdc++.h>
using namespace std;
const int Maxsize=10;
int stk[Maxsize];
int top=-1;

void push(){
    if(top==Maxsize-1){
        cout<<"Stack overflowed"<<endl;
    }
    else{
        cout<<"Enter the number: ";
        int a;cin>>a;
        stk[++top]=a;
    }
}
void pop(){
    if(top==-1)cout<<"Stack is empty";
    else {
        int a=stk[top--];
        cout<<"Poped element: "<<a<<endl;
    }
}
void display(){
    if(top==-1)cout<<"Stack is empty";
    else{
        for(int i=top;i>=0;i--){
            cout<<stk[i]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int choice;
    do{
        cout<<"Stack menu: "<<endl;
        cout<<"1. Push items"<<endl;
        cout<<"2. Pop items"<<endl;
        cout<<"3. Display items"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){

            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
            case 4: cout<<"Exiting ...."<<endl;break;
            default: cout<<"Wrong input!!!"<<endl;
        }
    }while(choice!=4);

    return 0;
}