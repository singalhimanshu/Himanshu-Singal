#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    freopen("output.txt", "w", stdout);
    int a[] = {1, -2, -1, 5, -1, 0, -1, 7};
    int n = sizeof(a) / sizeof(a[0]);

    int max_till_here = a[0], current_max = a[0];
    for (int i = 1; i < n; i++) {
        current_max = max(a[i], current_max + a[i]);
        max_till_here = max(max_till_here, current_max);
    }
    cout << max_till_here << '\n';
    return 0;
}
