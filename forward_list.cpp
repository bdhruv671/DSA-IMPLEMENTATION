#include<bits/stdc++.h>
// #include<forward_list>
using namespace std;
int main (){
    forward_list<int>l = {10,15,20};
    l.push_front(1);
    l.pop_front();
    for(int i : l){
        // cout << i<<" "<<endl;
    }
    forward_list<int> first ;
    first.assign({12,20,19,24});
    // first.remove(20);
    // first.reverse();
    // first.sort();
    first.merge(l);
    for(auto it = first.begin() ; it!= first.end();it++ ){
        cout<< *it << " "<<endl;
    }

forward_list<int>l2;
l2.assign(l.begin(),l.end());
for (int i : l2){
    // cout<< i << endl;


}

forward_list<int>l3;
l3.assign(5,10);

for (int i : l3){
    // cout<< i <<" ";


}


    return 0;
}