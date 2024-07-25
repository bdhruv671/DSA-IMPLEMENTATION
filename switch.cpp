#include<bits/stdc++.h>
using namespace std;

// wtp a prgm to represent 1 as sunday to 7 
int main(){
  
    int day ;
    cin >> day ;
    switch (day)
    {
    case 1: 
    cout<< "Sunday";
        break;
    case 2 :
    cout<< "Monday";
    break;
    case 3:
    cout<< "Tuesday";
    break;
    case 4:
    cout<<"Wednesday";
    break;
    case 5:
    cout<<"Thrusday";
    break;
    case 6: 
    cout<<"Friday";
    break;
    case 7:
    cout<<"Saturday";

    default:
    cout<<"Invalid";
        break;
    }
      return 0;

}