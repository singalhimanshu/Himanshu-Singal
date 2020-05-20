#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    cout << "Position of first set bit:" << '\n';
    bitset<5> b(string("00110"));
    bitset<5> a(string("00000"));

    cout << b._Find_first() << '\n'; // 1
    cout << a._Find_first() << '\n'; // 5
    cout << '\n' << '\n';


    cout << "Position of next set bit after the index:" << '\n';
    bitset<6> a1(string("010101"));
    for (int i = a1._Find_first(); i < a1.size(); i = a1._Find_next(i)) {
        cout << i << '\n';
    }
    cout << '\n' << '\n';


    cout << "Count no. of set bits in an interval:" << '\n';
    bitset<10> a2(string("1001010101"));
    int l = 2, r = 8;
    int n = a2.size();
    // Left shift initial (l - 1) bits
    a2 <<=  l - 1;
    cout << a2 << '\n';

    // Bring all the bits back to initial position
    a2 >>= l - 1;
    cout << a2 << '\n';

    // Remove the bits after the right boundary (say r)
    a2 >>= n - r;
    cout << a2 << '\n';

    cout << a2.count() << '\n';
    cout << '\n' << '\n';


    cout << "Count no. of common elements between two arrays:" << '\n';
    int arr[3] = {1, 2, 3};
    int brr[3] = {3, 4, 1};

    bitset<10> a3, b3;

    for (int i = 0; i < 3; i++) {
        a3.set(arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        b3.set(brr[i]);
    }

    bitset<10> res = a3 & b3;

    cout << res.count() << '\n';

    return 0;
}
