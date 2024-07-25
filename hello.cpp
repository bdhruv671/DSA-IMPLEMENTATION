#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
      int b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
      int n = 8;
      vector<pair<int, char> > vec;
        for(int i=0; i<n; i++){
            pair<int, char> p(a[i],b[i]);
        
        }
        sort(vec.begin(), vec.end());
        for(int i=0; i<n; i++){
            cout<<vec[i].second<<" ";
        }
        cout<<endl;

}
