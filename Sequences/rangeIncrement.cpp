#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &it : arr)
    cin >> it;
  int factor;
  cin >> factor;
  int q;
  cin >> q;
  vector<int> sum(n, 0);
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    sum[l] += factor;
    if ((r + 1) < n) {
      sum[r + 1] -= factor;
    }
  }
  for (int i = 1; i < n; i++)
    sum[i] += sum[i - 1];
  for (int i = 0; i < n; i++)
    arr[i] += sum[i];
  for (auto it : arr) {
    cout << it << ' ';
  }
  cout << '\n';
  return 0;
}
