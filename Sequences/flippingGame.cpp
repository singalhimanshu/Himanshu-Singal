#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;

int n;
vector<int> arr;
void solve() {
    cin >> n;
    arr.resize(n);
    int ones = 0;
    for (auto &it : arr) {
        cin >> it;
        ones += it;
        if (it == 1)
            it = -1;
        else
            it = 1;
    }
    if (ones == n) {
        cout << ones - 1 << '\n';
        return;
    }
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
        x = max(x + arr[i], 0);
        ans = max(x, ans);
    }
    cout << ans + ones << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

