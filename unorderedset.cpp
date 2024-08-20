#include <bits/stdc++.h>
using namespace std ;
int main (){
    unordered_set<int>s;
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(29);
    for (int i : s){
        cout << i<< endl;
    }

    cout << s.size()<< endl;
    s.clear();

    cout << s.size();
cout << endl;

}