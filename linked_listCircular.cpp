#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // if(this->next != NULL) {
        //     delete next;
        //     next = NULL;
        // }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

bool detectLoop(Node *head)
{

    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {

        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Loop is present at " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}



void removeLoop(Node* head){
    if(head==NULL || head->next==NULL){
        return; 
    }
    Node* startNode=startOfLoop(head);
    Node* temp=startNode;
    while(temp->next!=startNode){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
    // Node* tail = NULL;

    // insertNode(tail, 5, 3);
    // print(tail);

    // insertNode(tail, 3, 5);
    // print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 7, 9);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 9, 10);
    // print(tail);

    // insertNode(tail, 0, 5);
    // print(tail);

    // deleteNode(tail, 5);

    Node *tail = nullptr;

    // Create nodes
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);

    // Construct the linked list: 1 -> 2 -> 3 -> 4 -> NULL
    tail = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2;

    // Test detectLoop function
    bool hasLoop = detectLoop(tail);
    cout << "Has Loop: " << (hasLoop ? "Yes" : "No") << endl;

    cout<<"loop starts from the node: "<<startOfLoop(tail)->data<<endl;
    removeLoop(tail);

    hasLoop = detectLoop(tail);
    cout << "Has Loop: " << (hasLoop ? "Yes" : "No") << endl;
    print(tail);

    return 0;
}