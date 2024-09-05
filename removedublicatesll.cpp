#include <bits/stdc++.h>
using namespace std ;
struct Node {
    int data ;
    Node * next ;
    Node ( int x){
        data = x ;
        next = NULL ;
    }
};
void Printsorted(Node * head ){
Node * curr = head;
while ( curr != NULL && curr -> next!= NULL){
    if ( curr ->data == curr ->next->data){
        Node * temp = curr -> next;
        curr -> next = curr->next->next;
        delete temp ;
    }
    else {
        curr = curr -> next;
    }
}

cout << head ->next->next->data;
}
int main (){
    int n = 2;
     Node * head = new Node ( 10);
    head->next= new Node(20);
    head->next -> next = new Node(20);
    head->next ->next -> next = new Node(40);    
    head->next ->next -> next->next = new Node(50);  
    head->next ->next -> next->next->next = new Node(50);  
Printsorted(head );

return 0;

}