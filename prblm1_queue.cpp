#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int>q,int k){
    stack<int>st;
    for (int i =0; i<k ; i++){
        st.push(q.front());
        q.pop();
    }

//   cout<<  st.back();
  for (int i =0; i<k;i++){
    q.push(st.top());
    st.pop();


  }

q.pop();
q.pop();
q.push(40);
q.push(50);

  while(!q.empty()){
    cout << q.front()<<" ";
    q.pop();
  }



}


int main (){
    queue<int>q;

        q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
        q.push(50);
    int k = 3;
    reverse(q,k);
return 0;

}