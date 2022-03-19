// https: // atcoder.jp/contests/agc029/tasks/agc029_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    long long s = S.length();
    long long A = 0;
    long long B = 0;
    for (int i = 0; i < s; i++)
    {
        if ('W' == S[i])
        {
            B = B + (i - A);
            A++;
        }
    }
    cout << B << endl;
    return 0;
}