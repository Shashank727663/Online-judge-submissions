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
    lli n , m , k ;
    cin >> n >> m >> k;
    vector<lli>applications;
    lli ans =0;
    for(lli i = 0 ; i < n;i++){
        int num;
        cin >> num;
        applications.push_back(num);
    }
    vector<lli>avaliable;
    for(lli i = 0 ; i < m ; i++) {
        lli  num;
        cin >> num;
        avaliable.push_back(num);
    }
    for(int i = 0 ; i < n ;i++) {
        // if(find(avaliable.begin(), avaliable.end(), applications[i]) != avaliable.end() ) {

        // }
    }
}