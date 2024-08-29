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

Node* insertPos(Node* head, int pos, int data){
    Node* temp = new Node(data);
    if (pos == 1 ){
        temp->next = head ;
        return temp ;
    }
    Node *curr = head;
    for (int i = 1 ; i <= pos -2 &&  curr != NULL ; i++ ){
        curr = curr->next;}
        if ( curr == NULL){
            return head ;


        }

        temp->next = curr->next;
        curr->next= temp->next;
    return head;
}

int main(){
    int data = 40;
    int pos = 3;
Node * head = new Node(10);

head->next = new Node (20);
head->next->next = new Node (30);
head->next->next->next = new Node(40);
Node* v = insertPos(head ,pos,data );
cout << v->data<< " ";
return 0;
}