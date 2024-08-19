#include<bits/stdc++.h>
using namespace std ;
int main(){
    multimap<int,int> mm;
    mm.insert(10,1);
    mm.insert(20,2);
    mm.insert(20,3);
    mm.insert(20,4);
    mm.insert(30,4);
    auto it = mm.equal_range(20);
    for (auto itr = it.first;itr != it.second;itr++){
        cout << itr->first<< endl;
        cout << itr->second<< endl;

    }

    return 0;
    }