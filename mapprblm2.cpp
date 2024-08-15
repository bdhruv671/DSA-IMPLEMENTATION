#include<bits/stdc++.h>
using namespace std ;
void printgreater(int arr[],int n){
    map<int,int>m;
    for(int i = 0 ; i< n ; i++){
        m[arr[i]]++;

    }
    int cum_f= 0;
    for(auto it = m.rbegin(); it != m.rend(); it++){
        int fre = it->second;
        it->second = cum_f;
        cum_f+=fre;

        
    }
    for(int i = 0 ; i< n ; i++){
        cout << m[arr[i]]<< " ";
    }


}

int main(){
    int arr[]= {2,8,10,5,3};
    int n = 5;
    printgreater(arr,n);
    return 0;

}