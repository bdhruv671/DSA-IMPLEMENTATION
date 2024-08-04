#include<bits/stdc++.h>
using namespace std;
int main(){
       int arr[]={10,15,20};
        for (int i =0 ; i < 3;i++){
        arr[i]=-arr[i];

       } 
       priority_queue<int>pq(arr,arr+3);
      while(!pq.empty()){
        cout << -pq.top()<< " ";
      pq.pop();
      }
      return 0;
}