#include<bits/stdc++.h>
using namespace std ;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);   
    auto it = s.upper_bound(10);
    if(it != s.end()){
        cout<<*it << endl;

    }
    else 
    cout << "given element is greater than the largest"<<endl;


}