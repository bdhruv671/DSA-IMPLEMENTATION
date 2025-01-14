#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int f(const vector<int>& a) {
    unordered_map<int, int> b;

    for (int c : a) {
        b[c]++;
    }

    int ans = INT_MIN;
    int maxi = INT_MIN;
    for (const auto& e : b) {
        if (e.second > maxi) {
            ans = e.first;
        }
        else if(e.second==maxi){
            ans = max(ans, e.first);
        }
    }

    return ans;
}

int main() {
    vector<int> x = {7, 2, 6, 1, 7, 9, 3, 4, 3, 2, 8, 7, 6, 5, 2, 9, 7, 11, 10};

    int y = f(x);
    if (y == -1) {
        cout << "No repeated numbers found." << endl;
    } else {
        cout << "The largest repeated number is: " << y << endl;
    }

    return 0;
}