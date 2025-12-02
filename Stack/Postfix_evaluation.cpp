#include<bits/stdc++.h>
using namespace std;
 const int maxsize=20;
int stk[maxsize];
int top=-1;

bool isoperand(char c){
     if(c>='0' && c<='9') return true;
     return false;
}
bool isoperator(char c){
    if(c=='+'|| c=='-'|| c=='*' || c=='/')return true;
    return false;
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
        char c;
        cout<<c<<"        ";
        if(isoperand(c)){
            stk[++top]=c-'0';
        }

       if(isoperator(c)) {
            int a=stk[top--];
            int b=stk[top--];
            if(c=='+')stk[++top]=a+b;
            else if(c=='-')stk[++top]=a-b;
            else if(c=='*')stk[++top]=a*b;
            else if(c=='/')stk[++top]=a/b;
            
        }
         display();
            cout<<endl;
    }

   
   cout<<"Final ans: "<<stk[top]<<endl;

    return 0;
}