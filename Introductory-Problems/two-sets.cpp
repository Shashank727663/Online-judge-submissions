#include<iostream>
#include<vector>
using namespace std;

typedef long long int lli;

bool solve(int i, int n, vector<int>& used, vector<lli>& res, int curr_sum, int target_sum) {
    if (curr_sum == target_sum) {
        return true;
    }
    if (i > n || curr_sum > target_sum) {
        return false;
    }

   
    if (!used[i]) {
        used[i] = 1;
        res.push_back(i);
        if (solve(i + 1, n, used, res, curr_sum + i, target_sum)) {
            return true;
        }
        // Backtrack
        used[i] = 0;
        res.pop_back();
    }

    // Exclude current element from the subset
    return solve(i + 1, n, used, res, curr_sum, target_sum);
}

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

    // Use recursive function to fill the first subset
    solve(1, n, used, first, 0, target_sum);

    // Fill the second subset with the remaining elements
    for (int i = 1; i <= n; ++i) {
        if (!used[i]) {
            second.push_back(i);
        }
    }

    cout << first.size() << endl;
    for (auto x : first) {
        cout << x << " ";
    }
    cout << endl;

    cout << second.size() << endl;
    for (auto x : second) {
        cout << x << " ";
    }
}

