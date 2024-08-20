#include<bits/stdc++.h>
using namespace std ;


string read(string arr[], int n){

    unordered_map<string,int>m;
    for(int i =0 ; i <n ; i++){
        m[arr[i]]++;

    }
    int max_int= 0;
    string winner ;

    for (auto x: m){
        if (x.second> max_int){
            max_int = x.second;
            winner = x.first;

        }
    }
     return winner ;


}
int main (){
    string arr[]={"gfg","ggg","gfg","jjj"};
    int n = 4;
 cout<<    read(arr,n);

    

return 0;
}