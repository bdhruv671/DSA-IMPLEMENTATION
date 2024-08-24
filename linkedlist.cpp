#include<bits/stdc++.h>
using namespace std ;
struct Node{
  int data ;
  Node *next ;
  Node (int x){
    data  = x;
    next = NULL;
  }
};
  void printlist(Node *head){
    // auto it  = head ;
    while (head != NULL){
        cout << head-> data<< " ";

        head = head->next;

    }
  }



int main(){
Node *head = new Node(10);
head-> next=  new Node(20);
head-> next-> next= new Node(30);
    printlist(head);
  
    
}