#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    stack<int> s ;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<< s.size()<< endl;
    cout << s.top()<< endl;
    s.pop();
    cout << "after pop "<<s.size()<< endl;
    
cout << "elements in the stack"<< " ";
    while(s.empty()==false){
        
        cout << s.top()<< " ";
        s.pop();
    }


}