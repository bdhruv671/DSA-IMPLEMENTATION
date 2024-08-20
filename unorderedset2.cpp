#include<bits/stdc++.h>
using namespace std ;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    if (s.find(10)!= s.end()){
        cout << "  found"<< endl;

    }
    else 
    cout << "not found"<< endl;


    if (s.count(10)){
        cout<< "Found"<< endl;
    }

    else 
    cout << "not found";
}