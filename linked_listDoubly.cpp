#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        cout<<"deleting node with data: "<<data<<endl;
    }
};

void insertAtHead(Node* &tail, Node* &head, int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }

    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}

void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }

    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head, Node* &tail, int d, int pos){
    
    if(pos==1){
        insertAtHead(tail, head, d);
        return;
    }
    
    Node* curr=head;

    for(int i=1; i<pos-1; i++){
        curr=curr->next;
    }
    if(curr -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    Node* temp=new Node(d);

    temp->next=curr->next;
    curr->next->prev = temp;
    curr->next=temp;
    temp->prev=curr;

}

void deleteNode(int pos, Node* &head){
    Node* temp=head;
    for(int i=1; i<pos; i++){
        temp=temp->next;
    }
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(temp->next==NULL){
        Node* curr=head;
        for(int i=1; i<pos-1; i++){
            curr=curr->next;
        }
        Node* del=curr->next;
        curr->next=NULL;
        delete(del);
        return;
    }

    else{
        Node* temp=head;
        for(int i=1; i<pos; i++){
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp->prev=NULL;
        temp->next=NULL;
        delete(temp);
        return;
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

int main(){

    Node* node1=new Node(100);
    Node* head=node1;
    Node* tail=node1;

    // insertAtHead(tail, head, 20);
    // insertAtHead(tail, head, 30);
    // print(head);
    // cout<<"head: "<<head->data<<", "<<"tail: "<<tail->data<<endl;
    // cout<<"length: "<<getLength(head)<<endl;

    insertAtTail(tail, head, 340);
    insertAtTail(tail,head, 390);
    insertAtTail(tail,head, 400);
    // print(head);
    // cout<<"head: "<<head->data<<", "<<"tail: "<<tail->data<<endl;
    // cout<<"length: "<<getLength(head)<<endl;

    print(head);
    // insertAtPosition(head, tail, 200, 1);
    // print(head);

    deleteNode(4, head);
    print(head);

    return 0;
}