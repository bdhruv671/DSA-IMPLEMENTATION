#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int>&p1,
                const pair<int,int>&p2){
                    return p1.second<p2.second;
                }

void displaySorted(int roll_no[],int marks[],int n){
    vector<pair<int,int> >vec ;
    for (int i =0; i<n;i++){
        vec.push_back(make_pair(roll_no[i],marks[i]));

    }

    sort(vec.begin(),vec.end(),sortbysec);
    for (int i = 0 ; i < vec.size();i++){
        cout << vec[i].first<<" "<<vec[i].second<<endl;

    }
    
}

int main(){
     int roll_no[] = { 17, 20, 15, 1, 5 };
    int marks[] = { 80, 75, 93, 78, 84 };
     int n = sizeof(roll_no) / sizeof(roll_no[0]);
    displaySorted( roll_no, marks, n);
return 0;

}