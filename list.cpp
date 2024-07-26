#include<bits/stdc++.h>
#include<list>
using namespace std ;
int main (){
    list<int>l={10,20,30,40};
    l.push_back(10);
    l.push_front(10);
    l.pop_front();
    l.pop_back();
    for (int x : l){
        cout << x << " ";
    }
    auto it = l.begin();
    it = l.insert(it,2);

    l.insert(it,2,7);
     for (int x : l){
        cout << x << " ";
    }

    cout<<l.front()<< " "<<l.back();
    return 0;
}