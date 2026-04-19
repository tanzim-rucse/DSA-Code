#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

// Insert at end
void insert(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print list
void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Split function
void splitList(Node* head, Node* &front, Node* &back){
    Node *temp=head;
    int i=1;
    while(temp->next!=NULL){
        temp=temp->next;
        i++;
    }
    int k=0;
    if(i%2==0){
        k=i/2;
    }
    else{
        k=(i/2)+1;
    }
    i=1;
    front=head;
    while(i<k){
        head=head->next;
        i++;
    }
    back=head->next;
    head->next=NULL;



}

int main(){
    Node* head = NULL;

    insert(head, 2);
    insert(head, 3);
    insert(head, 5);
    insert(head, 7);
    insert(head, 11);

    Node* front = NULL;
    Node* back = NULL;

    splitList(head, front, back);

    cout << "Front list: ";
    print(front);

    cout << "Back list: ";
    print(back);

    return 0;
}