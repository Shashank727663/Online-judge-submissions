#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits>
#include<climits>
#include <stdlib.h>
using namespace std;
typedef long long int lli;

#define MOD 1000000007

int main() {
    lli n;
    cin >> n;
    lli ans = 1;
    for(int i = 0 ; i < n ; i++) {
        ans *= 2; 
        ans = ans % MOD;
    }

    cout << ans;
}