#include<iostream>
#include<vector>
using namespace std;

typedef long long int lli;



int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;

    vector<int> used(n + 1, 0);
    vector<lli> first;
    vector<lli> second;
    int target_sum = sum / 2;
    vector<int>vis(n+1 , 0);
    lli max_elemet = n;
    lli set1_sum = 0;
    vector<lli>set1 , set2;
    while (set1_sum < target_sum)
     {
       lli remaining_sum = target_sum - set1_sum;
       if(remaining_sum > max_elemet) {
         set1.push_back(max_element);
                vis[max_element] = 1;
                set1_sum += max_element;
                max_element--;

       }else {
         set1.push_back(max_elemet);
        remaining_sum -= max_elemet;
        vis[remaining_sum ] = 1;
       }
    }


    for(int i = 0 ; i  <n ; i++ ) {
        if(!vis[i]) {
            set2.push_back(nums[i]);
        }
    }

    cout << set1.size() << endl;
    for(auto x  : set1) {
        cout << x << " ";
    }
    cout << endl;


    for(auto  x : set2) {
        cout << x<<" ";
    }
    


    
}

