#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,int>mm;
    mm.insert({10,1});
    mm.insert({20,2});
    mm.insert({10,3});
    mm.insert({10,4});
    // cout << mm.count(10)<<endl;
    // mm.erase(10);
    // cout<< mm.count(10)<<endl;
auto it = mm.lower_bound(10);
auto it2= mm.upper_bound(10);
cout <<( *it).first<< endl;
cout << (*it2).first<< endl;

}