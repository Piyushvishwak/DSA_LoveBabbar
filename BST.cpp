#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root, int d){
    if(root==NULL){
        root= new Node(d);
        return root;
    }
    if(d<=root->data){
        root->left=insertIntoBST(root->left, d);
    }
    else{
        root->right=insertIntoBST(root->right, d);
    }
    return root;
}

Node* deleteFromBST(Node* root, int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 children
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        // left part is null
        else if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //right part is null
        else if(root->right==NULL && root->left!=NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //2 children
        else{
            Node* temp=root->right;
            while(temp->left!=NULL){
                temp=temp->left;
            }
            root->data=temp->data;
            root->right=deleteFromBST(root->right, temp->data);
            return root;
        }
    }
    //left me jaao
    else if(val<root->data){
        root->left=deleteFromBST(root->left, val);
    }
    //right me jaao
    else{
        root->right=deleteFromBST(root->right, val);
    }
    return root;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child nodes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root, data);
        cin>>data;
    }
}

int main(){
    Node* root=NULL;
    takeInput(root);
    levelOrderTraversal(root);
    cout<<endl;
    int val;
    cin>>val;
    root=deleteFromBST(root, val);
    cout<<endl;
    levelOrderTraversal(root);
    return 0;
}