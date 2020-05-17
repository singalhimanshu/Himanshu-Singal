#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n&1);
        n = n >> 1;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    ll test; cin >> test;
    while(test--)
    {
        int a, b; cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            // Check if the no is even and is less than b
            if ((i&1) == 0 && i < b)
            {
                count += 2 * countSetBits(i) + 1;
                i++;
                continue;
            }
            count += countSetBits(i);
        }
        cout << count << '\n';
    }
    return 0;
}
