#include<bits/stdc++.h>
using namespace std;
void reverse(string &str){
    stack<char>rev;
    for(int i = 0 ; i<str.length();i++){
        rev.push(str[i]);

    }
    while(rev.empty()==false){
        cout << rev.top();
        rev.pop();

    }


}
int main (){
    string str = "geeks";
    
    reverse(str);
    return 0;

}