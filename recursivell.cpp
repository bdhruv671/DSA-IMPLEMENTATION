#include<bits/stdc++.h>
using namespace std ;



struct Node {
    int data ;
    Node *next ;
    Node (int x){
        data = x;
        next = NULL;
    }
};
int search(Node* head ,int x){
    int pos = 1;
    Node*curr = head;
    while(curr != NULL){
        if (curr -> data ==x)
        return pos ;

     else {
        pos++ ;
        curr = curr-> next;

    }
    }
   return -1;

     

}

int main (){
    int t = 30 ;
    // int a =30;
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next->next = new Node(30);
     // Call search and store the result
    int position = search(head, t);

    if (position != -1) {
        cout << "Element found at position: " << position << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;

}