#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *add;
}; struct node *prev=NULL, *start=NULL, *temp=NULL, *newone=NULL;

void Create(){
    newone=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the first element:"<<endl;
    int n;
    cin>>n;
    start= newone;
    start->data=n;
    start->add=NULL;
    cout<<"Do you want to add more? (Y/N)"<<endl;
    temp=start;
    char c; cin>>c;
    while(c=='Y' || c=='y'){
        newone=(struct node*)malloc(sizeof(struct node));
        cout<<"Enter one Element:"<<endl; 
        cin>>n;
        newone->data=n;
        newone->add=NULL;
        temp->add=newone;
        temp=temp->add;

        cout<<"Do you want add more? (Y/ N)"<<endl;
        cin>>c;
    }
}

void Display(){
    if(start==NULL){
        cout<<"NO Element"<<endl;
    }
    else{
        temp=start;
        while(temp!=NULL){
           cout<<temp->data<<"  ";
           temp=temp->add;
        }
    cout<<endl;
    }
}

void Insert_first(){
    if(start==NULL){
        cout<<"NO Elements"<<endl;
    }
    else{
        cout<<"Enter elements for insert_first"<<endl;
        int n;cin>>n;
        temp=start;
        newone=(struct node*)malloc(sizeof(struct node));
        newone->data=n;
        newone->add=NULL;
        start=newone;
        newone->add=temp;

    }
}

void Insert_middle(){
    if(start==NULL){
        cout<<"NO Element"<<endl;
    }
    else{
        cout<<"After which no of element you want to add?"<<endl;
        int pos; cin>>pos;
        int i=1;
        temp=start;
        while(i<pos){
            i++;
            temp=temp->add;                      ////// 1 2 3   4 5
        }
        newone= (struct node*)malloc(sizeof(struct node));
        cout<<"Enter the element you want to add::"<<endl;
        int n; cin>>n;
        newone->data=n;
        newone->add=NULL;
        newone->add=temp->add;
        temp->add=newone;
        
    }
}

void Insert_last(){
    if(start==NULL){
        cout<<"NO Element"<<endl;
    }
    else{
        temp=start;
        while(temp->add!=NULL){
            temp=temp->add;                      ////// 1 2 3   4 5
        }
        newone= (struct node*)malloc(sizeof(struct node));
        cout<<"Enter the element you want to add::"<<endl;
        int n; cin>>n;
        newone->data=n;
        newone->add=NULL;
        temp->add=newone;
        
    }
}

void Delete_fist(){
    if(start ==NULL){
        cout<<"NO Elements"<<endl;
    }
    else{
        temp=start;
        start=start->add;
        delete temp;
    }
}

void Delete_middle(){
    if(start==NULL){
        cout<<"NO Elements";
    }
    else{
        cout<<"Enter the position::"<<endl;
        int n;cin>>n;
        int i=1;
        temp=start;
        struct node *prev=NULL;                                                                                            /// 1 2 3 4 5
        while(i<n){
            prev=temp;
            temp=temp->add;
            i++;
        }
        prev->add=temp->add;
        delete temp;
    }
}

void Delete_last(){
    if(start==NULL){
       cout<<"NO Elements"<<endl;
     }
     else{
        temp=start;
        struct node *prev=NULL;
        while(temp->add!=NULL){
            prev=temp;
            temp=temp->add;
        }
        if(prev==NULL){
            start=NULL;
        }
        else{
             prev->add=NULL;
        }
       
        delete temp;
     }
}

int main(){
    int choice;
    do{
    cout<<"<<<<<------<<<<<<<------Linked lists menu------->>>>>>>>------>>>>>>>"<<endl;
    cout<<"1. Create new linked list::"<<endl;
    cout<<"2. Traversing//Display elements::"<<endl;
    cout<<"3. Insert at first::"<<endl;
    cout<<"4. Insert at middle::"<<endl;
    cout<<"5. Insert at last::"<<endl;
    cout<<"6. Delete from first::"<<endl;
    cout<<"7. Delete from middle::"<<endl;
    cout<<"8. Delete from last::"<<endl;
    cout<<"9. Exit"<<endl;
    cout<<endl;
    cout<<"Enter your choice::"<<endl;
    cin>>choice;
    switch (choice)
    { 
    case 1: Create();break;
    case 2: Display();break;
    case 3: Insert_first();break;
    case 4: Insert_middle();break;
    case 5: Insert_last();break;
    case 6: Delete_fist();break;
    case 7: Delete_middle();break;
    case 8: Delete_last(); break;
    case 9: cout<<"Exiting"<<endl; break;
    default: cout<<"Invalid choice"<<endl;
    }
}while(choice!=9);

    return 0;
}

