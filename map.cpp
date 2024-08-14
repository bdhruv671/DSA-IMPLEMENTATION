#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m ;
    m.insert({10,100});
    m.insert({20,200});
    m.insert({40,300});
    m.insert({30,400});
for (auto it = m.begin(); it != m.end();it++){
    cout << (*it).first <<endl;
    cout<< (*it).second<< endl;
}
cout << m.size();

cout << endl;
if (m.find(100)!= m.end()){
    cout << "found"<<" ";

}

else
cout<< "not found"<<" ";


auto it = m.lower_bound(10);
cout << (*it).first;

cout << endl;
auto ut = m.upper_bound(10);
cout << (*ut).first<< endl;
}