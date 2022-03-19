// https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int h, w = 0;
    cin >> h >> w;
    long int ans = 0;
    if (h == 1 || w == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (h % 2 == 1 && w % 2 == 1)
    {
        ans = (h * w) / 2 + 1;
    }
    else
    {
        ans = (h * w) / 2;
    }
    cout << ans << endl;
    return 0;

}
