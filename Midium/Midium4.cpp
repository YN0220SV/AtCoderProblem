// https://atcoder.jp/contests/abc066/tasks/abc066_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string bs = " ";
    string as = " ";

    while (s.length() > 1)
    {
        s = s.substr(0, s.length() - 1);
        if (s.length() % 2 == 0)
        {
            bs = s.substr(0, s.length() / 2);
            as = s.substr(s.length() / 2 );
            if(bs==as)
            {
                cout << bs.length() * 2 << endl;
                return 0;
            }
            //cout << bs << " " << as << endl;
        }
    }
    cout << 2 << endl;
    return 0;
}