#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits>
#include<climits>
#include <stdlib.h>
using namespace std;

void solve(vector<long long int>&nums , long long int i , long long int n ,long long int &ans) {
    if( i >= nums.size() ) {
        return;
    }

    if(nums[i] < nums[i-1]) {
        ans+= abs(nums[i-1] - nums[i]);
        nums[i] = nums[i-1];
    }

    solve(nums, i + 1 ,  n , ans);

}

int main() {
    long long int n;
    cin >> n ;
    vector<long long int>nums;
    nums.resize(n);
    for(int  i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }
    long long int ans = 0;
    solve(nums , 1 , n , ans);
    cout << ans <<" ";

}