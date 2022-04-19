#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];

    }

    sort(a.begin(), a.end());
    float sum = a[0];
    for (int i = 1; i < n;i++)
    {
        sum = (sum + a[i]) / 2;
        cerr << sum << endl;
    }
    cout << sum << endl;
    return 0;
}