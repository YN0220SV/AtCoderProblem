// https://atcoder.jp/contests/abc160/tasks/abc160_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int k = 0;
    long int n = 0;
    cin >> k >> n;
    vector<int> a(n);
    vector<int> b(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i] - a[i - 1];
    }
    b[0] = k -a[n-1]+a[0];

    sort(b.begin(), b.end());
    for (int i = 0; i < n - 1; i++)
    {
        sum += b[i];
    }
    cout << sum << endl;
    return 0;
}