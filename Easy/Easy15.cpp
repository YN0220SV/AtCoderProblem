// https://atcoder.jp/contests/abc132/tasks/abc132_c
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    cin >> k;
    vector<int> a(k);
    for (int i =0 ; i < k;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int n = k / 2;

    ans = a[n ] - a[n-1];
    cout << ans << endl;

}