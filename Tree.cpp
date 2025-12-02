#include<bits/stdc++.h>
using namespace std;

struct Node{
    int info;
    Node *left, *right;
};struct Node *root=NULL ,*newone;

void Create(struct Node *root, struct Node *newone){
    if(newone->info<root->info){
        if(root->left==NULL){
            root->left=newone;
        }
        else{
            Create(root->left,newone);
        }
    }
    else if(newone->info>root->info){
        if(root->right==NULL){
            root->right=newone;
        }
        else{
            Create(root->right,newone);
        }
    }
    else{
        cout<<"Number already exists.  Thank You!"<<endl;
    }



}



void Inorder(struct Node * root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->info<<"  ";
        Inorder(root->right);
    }
}

void Preorder(struct Node *root){
    if(root!=NULL){
        cout<<root->info<<"  ";
        Preorder(root->left);
        Preorder(root->right);

    }
}
void Postorder(struct Node *root){
    if(root!=NULL){
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->info<<"  ";
    }
}






int main(){
    int choice;char c;

    do{
        cout<<"-----------Tree-----------"<<endl;
        cout<<"1.Create BST"<<endl;
        cout<<"2.Preorder Traversing"<<endl;
        cout<<"3.Inorder Traversing"<<endl;
        cout<<"4.Postorder Traversing"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter Your Choice: "<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                do{
                 cout<<"Enter an element: "<<endl;
                 int a;cin>>a;
                 newone=new Node{a,NULL,NULL};
                 if(root==NULL){
                    root=newone;
                 }
                 else{
                    Create(root,newone);
                 }
                 cout<<"Do you want to add more? (y/n)"<<endl;
                 cin>>c;

                }while(c=='y'|| c=='Y');
                break;
            }
            case 2:{ 
                Preorder(root);
                cout<<endl;
                break;
                }
            case 3:{ 
                Inorder(root);
                cout<<endl;
                break;
                }
            case 4:{ 
                Postorder(root);
                cout<<endl;
                break;
                }
            case 5: cout<<"Exiting...."<<endl;break;
        }


        
    }while(choice!=5);

    return 0;
}