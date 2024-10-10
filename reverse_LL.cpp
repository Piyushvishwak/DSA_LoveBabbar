// #include <bits/stdc++.h>
// #include<cmath>



// // 1. 

// LinkedListNode<int>* reverse1(LinkedListNode<int>* head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     LinkedListNode<int>* chotaHead=reverse1(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return chotaHead;
// }

// // 2.

// void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev){
//     if(curr==NULL){
//         head=prev;
//         return;
//     }
//     LinkedListNode<int>* forward=curr->next;
//     reverse(head, forward, curr);
//     curr->next=prev;

// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {

//     // LinkedListNode<int>* curr=head;
//     // LinkedListNode<int>* prev=NULL;
//     // reverse(head, curr, prev);
//     return reverse1(head);


// // 3.

//     // if(head==NULL  || head->next==NULL){
//     //     return head;
//     // }

//     // LinkedListNode<int> *prev=NULL;
//     // LinkedListNode<int> *curr=head;
//     // LinkedListNode<int> *forward=NULL;

//     // while(curr!=NULL){
//     //     forward=curr->next;
//     //     curr->next=prev;
//     //     prev=curr;
//     //     curr=forward;
//     // }
//     // return prev;
// }