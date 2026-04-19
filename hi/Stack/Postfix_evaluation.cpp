#include<bits/stdc++.h>
using namespace std;
const int Maxsize=10;
int stk[Maxsize];
int top=-1;

void push(int n){
    if(top==Maxsize-1){
        cout<<"Stack overflowed"<<endl;
    }
    else{
        stk[++top]=n;
    }
}
int pop(){
    if(top==-1)cout<<"Stack is empty";
    else {
        int a=stk[top--];
        return a;
    }
    return 0;
}

bool isoperand(char c){
     if(c>='0' && c<='9') return true;
     return false;
}
bool isoperator(char c){
    if(c=='+'|| c=='-'|| c=='*' || c=='/' || c=='^')return true;
    return false;
}
bool isalphabet(char c){
    if(c>='a' && c<='z')return 1;
    else return 0;
}


void display(){
    for(int i=0;i<=top;i++)cout<<stk[i]<<" ";
}
int main(){
    
    string exp;
    cout<<"Enter the exp"<<endl;

    getline(cin,exp);
    cout<<"Symbol--------Stack's contents"<<endl;
    for(int i=0;i<exp.size();i++){
        char c=exp[i];
        cout<<c<<"              ";
        if(isoperand(c)){
            push(c-'0');
        }
        else if(isalphabet(c)){
            cout<<"Enter value of "<<c<<endl;
            int a;cin>>a;
            push(a);
        }

       else if(isoperator(c)) {
            int a=pop();
            int b=pop();
            if(c=='+')push(b+a);
            else if(c=='-')push(b-a);
            else if(c=='*')push(b*a);
            else if(c=='/')push(b/a);
            else if(c=='^')push(pow(b,a));
        }
        for(int j=top;j>=0;j--){
            cout<<stk[j];
        }
        cout<<endl;
    }


   
   cout<<"Final ans: "<<stk[top]<<endl;

    return 0;
}eval $(ssh-agent -s)

ssh-keygen -t rsa -b 4096 -C "your@email.com"

ssh-add ~/.ssh/id_rsa