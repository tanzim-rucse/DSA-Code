#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* add;
};struct Node *temp=NULL,*prev=NULL,*start=NULL,*newone=NULL;


Node* create(vector<int>&arr){
    if(arr.empty())return NULL;
    newone= new Node();
    newone->add=NULL;
    newone->data=arr[0];
    start=newone;
    temp=start;
    for(int i=1;i<arr.size();i++){
        newone=new Node();
        newone->data=arr[i];
        newone->add=NULL;
        temp->add=newone;
        temp=temp->add;
    }
    return start;
}

Node* Intersection(Node* head1,Node* head2){
    map<int,int>m;
    while(head1!=NULL){
        m[head1->data]++;
        head1=head1->add;
    }
    vector<int>ans;
    while(head2!=NULL){
        if(m[head2->data]>0){
            ans.push_back(head2->data);
            m[head2->data]--;
        }
        head2=head2->add;
    }

    return create(ans);
    
   

}

void print(Node* head){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->add;
    }
}


int main(){
    vector<int>a1={1,2,3,3,4,4};
    vector<int>a2={3,3,4,4,5,6};
    Node* head1=create(a1);
    Node* head2=create(a2);
    Node* Intersection_node=Intersection(head1,head2);
    print(Intersection_node);

    return 0;
}