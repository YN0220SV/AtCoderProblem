// https://atcoder.jp/contests/abc157/tasks/abc157_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(3);
    vector<int> b(3);
    vector<int> c(3);
    int n;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    cin >> n;
    vector<int> nb(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nb[i];
    }
    vector<bool> ab(n, false);
    vector<bool> bb(n, false);
    vector<bool> cb(n, false);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == nb[j])
            {
                ab[i] = true;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == nb[j])
            {
                bb[i] = true;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i] == nb[j])
            {
                cb[i] = true;
            }
        }
    }

    cerr<<"fuck"<<endl;

/*

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << ab[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << bb[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << cb[i];
    }
    cout << endl;
    ////////////////

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << b[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << c[i];
    }
    cout << endl;
    //////////////////

*/



    string ans = "No";
    if (ab[0] && ab[1] && ab[2])
    {
        ans = "Yes";
    }
    if (bb[0] && bb[1] && bb[2])
    {
        ans = "Yes";
    }
    if (cb[0] && cb[1] && cb[2])
    {
        ans = "Yes";
    }
    if (ab[0] && bb[0] && cb[0])
    {
        ans = "Yes";
    }
    if (ab[1] && bb[1] && cb[1])
    {
        ans = "Yes";
    }
    if (ab[2] && bb[2] && cb[2])
    {
        ans = "Yes";
    }
    if (ab[0] && bb[1] && cb[2])
    {
        ans = "Yes";
    }
    if (ab[2] && bb[1] && cb[0])
    {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}