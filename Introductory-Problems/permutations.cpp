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
    int n;
    cin >> n;
    if( n == 2 || n == 3) {
        cout <<"NO SOLUTION"<<endl;
        return 0;
    }
    // even - even - odd - odd adj pairs 
    for(int i  = 2 ; i <= n ; i=i+2) {
        cout << i<<" ";
    }
    for(int i = 1 ; i <=n ;i= i+2) {
        cout  << i << " ";
    }
}