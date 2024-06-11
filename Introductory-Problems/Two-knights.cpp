#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits>
#include<climits>
#include <stdlib.h>
using namespace std;
typedef long long int lli;

int main() {
    lli n;
    cin >> n;
    for(int  K = 1 ; K <= n;K++) {
           
    long totalWays = ((long) K * K * (K * K - 1)) / 2;

   
    long attackingWays = 4 * (K - 1) * (K - 2);
    long ans = totalWays - attackingWays;

        cout << ans << endl;
    }
    return 0;
}
