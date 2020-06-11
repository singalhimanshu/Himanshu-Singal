#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 6};
    int n = a.size();
    int ans = 0, r = 0, x = 0;
    for (int l = 0; l < n; l++) {
      while (r < n && (x ^ a[r]) == (x + a[r])) {
        x += a[r];
        r++;
      }
      ans += r - l;
      if (l == r)
        r++;
      else
        x -= a[l];
    }
    cout << ans << '\n';
    return 0;
}
