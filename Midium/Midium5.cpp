// https://atcoder.jp/contests/abc139/tasks/abc139_d
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n = 0;
    cin >> n;
    long int ans = 0;
    if(n==2)
    {
        cout << 1 << endl;
        return 0;
    }
    ans = (n - 1) * n / 2;
    cout << ans << endl;
    return 0;
}