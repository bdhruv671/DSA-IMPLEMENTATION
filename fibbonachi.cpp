#include<bits/stdc++.h>
using namespace std;

int fib (int n ){
    if ( n == 0)return 0;
    if ( n == 1)return 1;
    return fib(n-1)+fib(n-2);
}
int main (){
    int n = 10 ;
   int result = fib(n);
    cout << result <<" ";

}