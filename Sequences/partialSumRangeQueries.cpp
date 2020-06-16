#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int> a = {1, 2, 3, 4};
  int n = a.size();
  vector<int> partialSum(n);
  partialSum[0] = a[0];
  for (int i = 1; i < n; i++)
    partialSum[i] = a[i] + partialSum[i - 1];
  int l = 1, r = 2;
  if (l == 0)
    cout << partialSum[r] << '\n';
  else {
    cout << partialSum[r] - partialSum[l - 1] << '\n';
  }
  return 0;
}
