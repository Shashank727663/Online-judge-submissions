#include<iostream>
using namespace std;

void solve(long long int  n ) {
    cout << n <<" ";
    if( n == 1) {
        return;
    }
    if( n % 2 == 0 ) {
        n= n / 2;
    }else if( n % 2 ==1) {
      n = (n*3) +1;
    }
    solve(n);
}
int main() {
    long long int n;
    cin >> n;
    solve(n);
}