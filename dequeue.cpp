#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq={10,20,30};
    dq.push_front(0);
    dq.push_back(40);
    for(auto x : dq){
        // cout << x << " ";
        // cout << dq.front()<<" " << dq.back()<< endl;
            
    }
    deque<int> d = {0,2,3,4,5};
    auto it = d.begin();
    it ++;
    d.insert(it,1);
    d.pop_back();
    d.pop_front();
    for ( it = d.begin(); it!= d.end();it++){
        cout << *it << endl;

    }
    cout << d.size();


    return 0;
}