// https: // atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nownedan = 0;
    for (int i = 0; i < 50000; i++)
    {
        nownedan = i * 1.08;
        if(nownedan==n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}