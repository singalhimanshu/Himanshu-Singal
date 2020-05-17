#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);
    // Simple assignment
    /* bitset<2> arr; */
    /* arr[0] = 1; */
    /* arr[1] = 0; */
    /* cout << arr << '\n'; // 01 */

    // Integer to bitset and vice-versa
    /* bitset<4>a_int(8); */
    /* cout << a_int << '\n'; // 1000 */
    /* int n = (int) a_int.to_ulong(); */
    /* cout << n << '\n'; // 8 */

    // String to bitset
    /* string str = "1010110100"; */
    /* bitset<10> brr(str); */
    /* cout << brr[0] << '\n'; // 0 */
    /* string new_str = brr.to_string(); */
    /* cout << new_str << '\n'; // 1010110100 */

    // Count no of ones
    /* cout << brr.count() << '\n'; // 5 */

    // Basic operations
    /* bitset<4> a(string("0101")); */
    /* bitset<4> b(string("1010")); */
    /* cout << (a & b) << '\n'; // 0000 */
    /* cout << (a | b) << '\n'; // 1111 */
    /* cout << (a ^ b) << '\n'; // 1111 */
    /* cout << (~a) << '\n'; // 1010 */
    /* cout << (a << 1) << '\n'; // 1010 */
    /* cout << (b >> 1) << '\n'; // 0101 */


    /* string str1 = "1010110100"; */
    /* istringstream stream(str1); */
    /* bitset<2> s1; */
    /* bitset<6> s2; */
    /* stream >> s1; */
    /* cout << s1 << '\n'; // 10 */
    /* stream >> s2; */
    /* cout << s2 << '\n'; // 101101 */

    // Check if any bit is set
    /* bitset<4> a1(string("1010")); */
    /* bitset<4> b1(string("0000")); */
    /* cout << a1.any() << '\n'; // true */
    /* cout << b1.any() << '\n'; // false */

    // Check if none of the bits are set
    /* cout << a1.none() << '\n'; // false */
    /* cout << b1.none() << '\n'; // true */

    // Check if all bits are set
    /* bitset<4> ball(string("1111")); */
    /* cout << ball.all() << '\n'; // True */


    //Flip all or any particular bit:
    /* bitset<4> a3(string("1010")); */
    /* cout << a3.flip() << '\n'; // 0101 */
    /* cout << a3 << '\n'; */
    /* cout << a3.flip(1) << '\n'; // 0111 */

    // Reset all or any particular bit:
    /* bitset<4> a4(string("1010")); */
    /* cout << a4.reset(1) << '\n'; // 1000 */
    /* cout << a4.reset() << '\n'; // 0000 */

    // Set all or any particular bit:
    bitset<4> a5(string("1010"));
    cout << a5.set(0) << '\n'; // 1011
    cout << a5.set() << '\n'; // 0000

    return 0;
}
