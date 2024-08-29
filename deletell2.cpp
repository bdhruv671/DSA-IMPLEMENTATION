#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data ;
    Node *next ;
    Node (int x){
        data = x;
        next = NULL;
    }
};

Node* insert(Node*head , int x){
    Node*temp = new Node (x);
    temp->next = head ;
    return head;
}


Node *deleteNode(Node*head  ){
    if(head == NULL)
    return NULL;

    if ( head->next == NULL){
        delete head ;
        return NULL ;
    }
Node* curr = head;

while( curr->next->next !=NULL)
{
    curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
    

}
int main (){

    Node*head = NULL;
    head = insert(head , 10 );
    head = insert(head ,  20);
    head = insert(head ,  30);
    while (head != 0){

    
        cout << head->data<< " ";
        head = head->next;}
  
return 0;
}