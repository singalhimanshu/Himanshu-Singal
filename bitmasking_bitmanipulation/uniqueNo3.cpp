#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count[32] = {0};
    for (int i = 0; i < n; i++)
    {
        int number = arr[i];
        int j = 0;
        while (number > 0)
        {
            count[j] += (number & 1);
            j++;
            number = number >> 1;
        }
    }
    int ans = 0, position = 1;
    for (int i = 0; i < 32; i++)
    {
        count[i] %= 3;
        ans += count[i] * position;
        position = position << 1;
    }
    cout << "Unique Number is: " << ans << '\n';
    return 0;
}
