#include<bits/stdc++.h>
using namespace std;

vector<int> ans(int arr[],int n,int k =10){
vector<int> vec;
    for(int i=0;i<n;i++){
        if(arr[i]<k){
           vec.push_back(arr[i]);
        }
    }
    return vec;
}
int main(){
 int   a[]= {10,2,3,5,16};
 vector<int> ans1 = ans(a,5);
 for(int i:ans1){
    cout<<i<<" ";
 }


}