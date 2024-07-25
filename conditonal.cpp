#include<bits/stdc++.h>
using namespace std ; 
// write a program to take input of your age 
//and print if you are an adult or not
int main(){
    int age ;
    cin >> age ;
    if (age >= 18){
        cout << "you are an adult "<< age << endl;

    }
    else {
        cout << "you are an teen"<<endl;
    }
    return 0;

}