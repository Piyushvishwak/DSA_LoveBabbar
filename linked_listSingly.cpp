#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    
    }
};

//insert at head
void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}


//insert at tail
void insertAtTail(Node* &tail, int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
    //or
    // tail=tail->next;
}

//insert at position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    Node* temp=head;

    // insert at start case
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    

    for(int i=1; i<position-1; i++){
        temp=temp->next;
    }

    // insert at tail case
    if(temp->next==NULL){
        insertAtTail(tail, d);
        tail = temp->next;
        return;
    }
   

    Node* new_node=new Node(d);
    new_node->next=temp->next;
    temp->next=new_node;    
}

//delete node
void deleteNode(Node* & tail, Node*& head, int pos){

    if(pos==1){
        Node* toDelete=head;
        head=head->next;

        if (head == nullptr) {
            tail = nullptr;
        }

        delete(toDelete);
        return;
    }

    Node* temp=head;
    for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }

    if(temp->next==tail){
        tail=temp;
    }

    Node* toDelete = temp->next;
    temp->next=temp->next->next;
    delete(toDelete);
}

//printing
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);

    Node* head=node1;
    Node* tail=node1;

    // insertAtHead(head, 20);
    // insertAtHead(head, 15);
    // insertAtHead(head, 56);

    insertAtTail(tail, 18);
    insertAtTail(tail, 15);
    insertAtTail(tail, 20);
    insertAtTail(tail, 29);


    print(head);
    deleteNode(tail, head, 5);
    print(head);
    cout<<head->data<<" "<<tail->data;

    // insertAtPosition(tail, head, 6, 11);
    // print(head);
    // cout << head->data<<endl; 
    // cout << tail->data;

    return 0;
} 