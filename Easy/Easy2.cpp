// ABC156C https://atcoder.jp/contests/abc156/tasks/abc156_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x.begin(), x.end());
    long int min = 100000000000;
    long int sum = 0;
    long int start = x[0];
    long long end = x[n - 1];
    if (start == end)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = start; i < end; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += (i - x[j]) * (i - x[j]);
        }
        if (sum < min)
        {
            min = sum;
        }
    }
    cout << min << endl;
    return 0;
}