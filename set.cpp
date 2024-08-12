#include<bits/stdc++.h>
using namespace std ;
int main(){
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for (auto it = s.begin();it != s.end(); it++){
        cout << *it <<" ";
    

    }
    cout << endl;
    auto st = s.find(20);
    if (st == s.end()){
        cout << "not found"<<" ";

    }
    else
    cout << "found"<<" ";

// while (st!=s.end() ){
//     cout << *st;
// }
    
s.clear();
cout << s.size();
}