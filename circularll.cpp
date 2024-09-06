#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data ;
    Node *  next ;
    Node ( int x ){
        data = x;
        next = NULL;
            }
};

void printlist(Node * head ){
    if ( head == NULL )return ;
    // cout << head->data<<" ";
    // for ( Node * temp = head -> next ; temp!= head ; temp = temp -> next ){
    //     cout << temp->data<<" ";
    // }
Node * p = head ;
    do {
        cout << p->data<<" ";
        p=p->next;
    }
    while ( p!= head);
}

int main (){
Node * head = new Node ( 10);
    head->next= new Node(20);
    head->next -> next = new Node(30);
    head->next ->next -> next = new Node(40);    
head->next ->next -> next-> next = head;
printlist(head);
}