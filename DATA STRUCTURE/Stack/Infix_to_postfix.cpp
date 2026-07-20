#include<bits/stdc++.h>
using namespace std;
const int Maxsize=10;
char stk[Maxsize];
int top=-1;
stack<int>stk2;

void push(char n){
    if(top==Maxsize-1){
        cout<<"Stack overflowed"<<endl;
    }
    else{
        stk[++top]=n;
    }
}
int pop(){
    if(top==-1){
        cout<<"Stack is empty";
        return -1;
    }
    else {
        int a=stk[top--];
        return a;
    }
    return 0;
}

bool isoperand(char c){
    if(c>='0' && c<='9')return true;
    else return false;
}
bool isoperator(char c){
    if(c=='+'|| c=='-'|| c=='*' || c=='/')return true;
    return false;
}
int precedence(char op){
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    return 0;
}


void Postfix_evaluation(string str){
    for(int i=0;i<str.size();i++){
        char c=str[i];

        if(isoperand(c)){
            stk2.push(c-'0');
        }
        else if(isoperator(c)){
            int a = stk2.top(); stk2.pop();
            int b = stk2.top(); stk2.pop();

            if(c=='+') stk2.push(b + a);
            if(c=='-') stk2.push(b - a);
            if(c=='*') stk2.push(b * a);
            if(c=='/') stk2.push(b / a);
        }
    }
    cout<<"final ans: "<<stk2.top()<<endl;
}



int main(){
    cout<<"Enter the Infix expression::"<<endl;
    string str;
    getline(cin,str);
    push('(');
    str.push_back(')');
    string p;
    for(int i=0;i<str.size();i++){
        char c=str[i];
        cout<<c<<"             ";
        if(isoperand(c)){
            p.push_back(c);
        }
        else if(c=='(')push('(');
        else if(isoperator(c)){
            while(top!=-1 && stk[top]!='(' &&  (precedence(stk[top])>=precedence(c)) ){
               char a= pop();
               p.push_back(a);
            }
            push(c);
        }
        else if(c==')'){
            char a=pop();
            while(a!='('){
                p.push_back(a);
                a=pop();
            }
        }
        for(int j=0;j<p.size();j++){
            cout<<p[j];
        }
        cout<<endl;
    }
    Postfix_evaluation(p);
    return 0;
}