// https://atcoder.jp/contests/abc068/tasks/abc068_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> k{1, 2, 4, 8, 16, 32, 64};

    for (int i = 0; i < 7; i++)
    {
        if (k[i] > n)
        {
            cout << k[i - 1] << endl;
            
            return 0;
        }
    }
    cout << 64 << endl;
    return 0;
}