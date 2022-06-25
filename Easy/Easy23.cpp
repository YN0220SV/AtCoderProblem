#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int d = 0;
    int x = 0;
    cin >> n >> d >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (d-1) / (a[i]);
    }
    sum += n + x;
    cout << sum << endl;
    return 0;
}