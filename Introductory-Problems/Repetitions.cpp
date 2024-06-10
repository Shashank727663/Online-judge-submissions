#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits>
#include<climits>
#include <stdlib.h>
using namespace std;
void solve(string &s ,int i , int n , int &ans , int curr) {
    if( i == n - 1 ) {
        return;
    }

    if(s[i] == s[i+1]) {
        curr++;
        ans = max(ans,curr);
    }else {
        curr = 1;
    }

    solve( s , i + 1 ,n, ans,curr);
}

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = 1;

    solve(s,0,n,ans,1);
    cout << ans << endl;
}