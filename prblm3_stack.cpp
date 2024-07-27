#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,8,2,32,12,44};
    int n = sizeof(arr)/sizeof(int);
    for (int i =0 ; i<n;i++){
        int span =1;
        for(int j = i-1; j>=0;j--){
            if(arr[j]<= arr[i]){
                span++;
            }
            else {
            break;
            

        
            }
           
        }
             cout << span<<endl;
    }
    
    
return 0;
}