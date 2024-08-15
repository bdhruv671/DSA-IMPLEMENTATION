#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]= {10,3,4,2,59,27};

    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i< n ; i++){
        int count =0;
        for(int j = 0 ; j < n ; j++){
            if (arr[i]< arr[j])
            count++;

        } cout << count<< " ";
        
    }
   

}