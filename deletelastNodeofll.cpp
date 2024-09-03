//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};


void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


// } Driver Code Ends
//User function Template for C++

/*

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/

Node * deleteTail(Node *head)
{
    Node * ptr = head;
    while ( ptr -> next->next != NULL){
        ptr = ptr->next;
        
    }
    
   delete  ptr -> next ;
   ptr -> next = NULL;
    
    return head ;
    
    //Your Code here
}


//{ Driver Code Starts.



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = deleteTail (head);
        displayList (head);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends