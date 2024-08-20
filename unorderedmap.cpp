#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["gfg"] = 1;
    m["gfj"]=2;
    m["vcg"]=3;
    m.insert({"gfg",2});
    for(auto i : m){
        cout << i.first<<" "<< i.second<<endl;

    }
}