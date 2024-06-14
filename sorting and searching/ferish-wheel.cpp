#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lli;

int main() {
    lli n;
    lli k;
    cin >> n >> k;
    vector<lli> nums(n);
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin() , nums.end());
    int i = 0 ;
    int j = n - 1;
    lli ans = 0;
    while(i <= j ) {
        if(nums[i] + nums[j] <= k ) {
            i++;
            j--;
        }else {
            j--;
        }
        ans++;
    }

    cout << ans << endl;
}
