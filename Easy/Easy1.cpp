// ABC139B https://atcoder.jp/contests/abc139/submissions/me
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 1;
    int tap = 0;
    if (b == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    while (true)
    {
        sum += a - 1;
        tap++;
        if (sum >= b)
        {
            break;
        }
    }
    cout << tap << endl;
    return 0;
}