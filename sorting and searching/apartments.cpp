#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits>
#include<climits>
#include <stdlib.h>
#include<algorithm>
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
        avaliable.push_back( num );
        // flat , booked
    }
    sort(avaliable.begin() , avaliable.end());
    sort(applications.begin() , applications.end());
    int i  = 0;
    int j = 0;
    while (i <n && j < m)
    {
        if(abs(applications[i] - avaliable[j]) <= k ) {
            ans++;
            i++;
            j++;
        }else if (applications[i] < avaliable[j]) {
            i += 1;
        }
    
        else {
            j += 1;
        }
    }
    

    cout << ans<<endl;
}