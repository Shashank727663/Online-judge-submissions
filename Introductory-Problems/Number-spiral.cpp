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
    lli t;
    cin >> t;
    
    while(t--) {
        lli x ,y;
        cin >> x >> y;
        lli  ans;
        if( y > x) {
            if( y % 2 == 0 ) {
                  ans = (y-1)*(y-1) + 1+(x-1);

            }else {
                ans = y*y - (x-1);
            }
        }
        else {
            if(x %2 == 1) {
                ans = (x-1)*(x-1) + 1 + (y-1);

            }else {
                ans = x*x - (y-1);
            }
        }

        cout << ans <<endl;
    }
}