#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left,*right; 
}; 

void insert(Node* &root, Node * newone){
    if(root==NULL){
        root=newone;
        return;
    }
    else if(newone->data < root->data){
        insert(root->left,newone);
    }
    else if(newone->data > root->data){
        insert(root->right,newone);
    }
    else {
        cout<<"Number already exists at location : "<<root<<endl;
    }
}

void preorder(Node * root){
    if(root!=NULL){
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }
}

void inorder(Node * root){
    if(root!=NULL){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }
}

void postorder(Node * root){
    if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
}



int main(){
    int choice;
    Node *root=NULL;
    do{
        cout<<"1.inserting at bst"<<endl;
        cout<<"2.preorder traversing "<<endl;
        cout<<"3.Inorder Traversing "<<endl;
        cout<<"4.Postorder Traversing"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        {
            cout<<"enter the element:"<<endl;
            int a;cin>>a;
            Node *newone=new Node();
            newone->data=a;
            newone->left=NULL;
            newone->right=NULL;
            insert(root,newone);
            break;
        }  
        case 2:{
            preorder(root);
            break;    
        }  
        case 3:{ 
            inorder(root);
            break;
        }
        case 4:{
            postorder(root);
            break;
        }
        case 5:{ 
            cout<<"Exiting..";
            break;
        } 
        default:
            cout<<"Invalid choice";        
        }
       
    }while(choice!=5);

    return 0;
}

