#include<iostream>
#include<set>
#include<vector>
using namespace std;
typedef long long int lli;

int main() {
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }

    set<int>s;
    for(auto  x : nums){
        s.insert(x);
    }

    cout << s.size();
}

