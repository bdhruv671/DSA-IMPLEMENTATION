#include<bits/stdc++.h>
#include<list>
using namespace std ;
int main(){
    list<int> l= {10,10,15,15,24,43,15};
    l.unique();
    l.sort();
    l. reverse ();
    for(int x: l){
        cout << x<< " ";

    }
    return 0;
}
