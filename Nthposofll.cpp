#include <bits/stdc++.h>
using namespace std ;

struct Node{
    int data ;
    Node * next ;
    Node ( int x){
        data = x;
        next = NULL;
    }
};


void Nth(Node * head , int n){
    // Node * first = head -> next -> next;
    // Node * sec = head ;
    // while (first != NULL){
    //     first = first -> next;
    //     sec = sec -> next;
    // }

    // cout << sec->data;

    if (head == NULL)return ;
    Node * first = head;
    for ( int i = 0 ; i< n; i++){

        if ( first == NULL)return ;
        first = first -> next;
    }
    Node * sec = head ;
    while ( first != NULL ){
        first = first -> next ;
        sec = sec -> next ;
    }
    cout << sec-> data ;

}
int main (){
    int n = 2;
     Node * head = new Node ( 10);
    head->next= new Node(20);
    head->next -> next = new Node(30);
    head->next ->next -> next = new Node(40);    

    Nth(head , n);
    return 0;
}