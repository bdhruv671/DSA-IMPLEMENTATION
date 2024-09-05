#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data ;
    Node *next ;
    Node ( int x){
        data = x;
        next = NULL;
    }

};


void FindNth(Node * head,int n ){
    int count = 0 ;
    Node* curr ;
    for (curr = head ; curr != NULL ; curr= curr -> next){
        count ++ ;
    }
if (n > count)return;
    curr = head ;
    for ( int i = 0 ; i< count - n +1; i ++){
        curr = curr -> next;
    }

    cout << curr -> data;

}

int main(){
int n = 3;
     Node* head = new Node (10);
    head->next= new Node(20);
    head->next -> next = new Node(30);
    head->next ->next -> next = new Node(40);
    FindNth(head,n);
    return 0;
}