#include<bits/stdc++.h>
using namespace std;
int main (){
    // this is 1d arr
    int arr[5];
    // cin >> arr[1]>>arr[2];
    // cout << arr[1]<<endl;

// this is 2d array 
    int b[2][3];
    b[0][1]= 45;
    cout << b[0][1]<< endl ;
    
    // string
    string s = "hello";
    int len = s.size();
    s[len-1] = 'n';
    cout << s[len-1]<< endl;
    cout << s[0]<<endl;
    
    return 0;
}