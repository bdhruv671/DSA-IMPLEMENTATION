#include<bits/stdc++.h>
using namespace std ;
struct Node {
    int data ;
    Node* next ;
    Node (int x){
        data = x;
        next = NULL;
    }



};


Node* insertsorted(Node*head ,int data){
    Node *temp = new Node(data);
    if (head == NULL){
        return temp ;
    }
    if (head->data > data){
        temp->next = head ;
        return temp ;
    }
    Node * curr = head ;
    while (curr->next != NULL && curr->next->data > data ){
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;

    return head ;
}

int main(){
    int data = 35;

Node * head = new Node(10);

head->next = new Node (20);
head->next->next = new Node (30);
head->next->next->next = new Node(40);
Node *v = insertsorted(head,data);

cout << v->next->next->next->next->data << " ";
return 0;
}