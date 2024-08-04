#include<bits/stdc++.h>
using namespace std;
int main (){
    priority_queue<int> pq ;
    pq.push(10);
    pq.push(15);
    pq.push(20);
    cout << pq.size()<<endl;
    cout<< pq.top()<< endl;
    while (!pq.empty()){
        cout<< pq.top()<<" ";
        pq.pop();
    }

    cout << endl;
    
//  reverse priority queue 
 priority_queue<int,vector<int>,greater<int>> pqr ;
    pqr.push(10);
    pqr.push(15);
    pqr.push(20);
    cout << pqr.size()<<endl;
    cout<< pqr.top()<< endl;
    while (!pqr.empty()){
        cout<< pqr.top()<<" ";
        pqr.pop();
    
    }
    return 0;
}