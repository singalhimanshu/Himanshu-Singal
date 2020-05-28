#include<bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
    int arr[] = {1, 2, 3, 4};
    int q[] = {3, 5, 7, 20};

    bitset<10> b;
    b[0] = 1;
    for (int i = 0; i < 4; i++) {
        b |= (b << arr[i]);
        cout << b << '\n';
    }
    for (int i = 0; i < 4; i++) {
        cout << q[i] << "-> ";
        if (b[q[i]])
            cout << "Subset sum exists\n";
        else
            cout << "Subset sum doesn't exist\n";
    }
    return 0;
}
