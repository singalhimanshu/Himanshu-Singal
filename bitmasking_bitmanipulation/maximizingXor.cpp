#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    int x, y;   cin >> x >> y;
    int maxXor = 0;
    for (int i = x; i <= y; i++)
    {
        for (int j = i; j <= y; j++)
        {
            int currentXor = (i ^ j);
            if (currentXor > maxXor)
                maxXor = currentXor;
        }
    }
    cout << maxXor << '\n';
    return 0;
}
