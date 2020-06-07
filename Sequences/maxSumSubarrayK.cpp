#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it: arr)
        cin >> it;
    int k;
    cin >> k;
    int window_sum = 0, best_sum = 0;
    for (int i = 0; i < k; i++)
        window_sum += arr[i];
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        best_sum = max(best_sum, window_sum);
    }
    cout << best_sum << '\n';
    return 0;
}

