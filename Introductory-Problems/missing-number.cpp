#include<iostream>
#include<vector>
using namespace std;

void SUM(vector<long long int>&nums,int i  ,long long int &sum) {
    int n = nums.size();
    if( i == n ) {
        return;
    }
    sum += nums[i];  
    SUM(nums , i + 1 , sum);

}
int main() {
    long long int n;
    vector<long long int>nums;
    cin >> n;
    nums.resize(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }

    long long int sum = 0;
    long long int Tsum = n *(n+1)/2;
    SUM(nums , 0 , sum);
    cout<< Tsum - sum << endl;


}