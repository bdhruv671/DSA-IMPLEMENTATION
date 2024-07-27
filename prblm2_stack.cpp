#include<bits/stdc++.h>
using namespace std;
//  balance the paranthesis 
bool balance(string str){
    stack<char>s;
    for(int i = 0; i<str.length();i++){
        if (str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);


        }
        else{if  (s.empty()== true){
            return false ;
            
        }
        s.pop();
        }
    }
         if (s.empty()==false){
            return false ;
            }
        
    
    return true ;
}

    
int main (){
    string str = "(({}))";
   cout << balance(str);

    return 0;
}