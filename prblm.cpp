#include<bits/stdc++.h>
using namespace std;

void ans(int arr[],int n,int k =10){

    for(int i=0;i<n;i++){
        if(arr[i]<k){
           cout<<(arr[i])<<" ";
        }
    }
}
int main(){
 int   a[]= {10,2,3,5,16};
 ans(a,5);


}