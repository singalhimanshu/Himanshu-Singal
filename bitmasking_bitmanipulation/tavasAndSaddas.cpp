#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    char arr[20];
    cin >> arr;
    ll digits = strlen(arr);
    ll ans = 0;
    ans = (1 << digits) - 2;
    for (ll i = digits - 1, count = 0; i >= 0; i--, count++)
    {
        if (arr[i] == '7')
            ans += (1 << count);
    }
    cout << (ans + 1) << '\n';
    return 0;
}
