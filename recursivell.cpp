#include<bits/stdc++.h>
using namespace std ;



struct Node {
    int data ;
    Node *next ;
    Node (int x){
        data = x;
        next = NULL;
    }
}

int main (){
    int t = 30 ;
    int a =30;
    Node *head = new Node(10);
    Node *head -> next = new Node(30);

}