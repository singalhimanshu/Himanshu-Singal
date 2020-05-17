#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    char s[200];
    cin >> s;
    int n = strlen(s);
    // 2^n - 1 subsequences
    int noOfSubsequences = (1 << n) - 1;
    cout << "{ }\n";
    for (int i = 1; i <= noOfSubsequences; i++)
    {
        int temp = i, j = 0;
        while (temp > 0)
        {
            if (temp & 1)
                cout << s[j];
            j++;
            temp = temp >> 1;
        }
        cout << '\n';
    }
    return 0;
}
