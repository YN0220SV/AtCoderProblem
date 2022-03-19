// https: // atcoder.jp/contests/agc014/tasks/agc014_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a, b, c;
    cin >> a >> b >> c;
    long int ans = 0;
    long int oa, ob, oc = 0;
    long int count = 0;
    cerr << (a == b == c) << endl;
    if(a==1&&b==1&&c==1)
    {
        cout << 0 << endl;
        return 0;
    }
    if ((a==b)&&(b==c)&&(c==a))
    {
        ans = -1;
        cout << ans << endl;
        cerr << "end" << endl;
        return 0;
    }
    
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
    {
        oa = a;
        ob = b;
        oc = c;
        a = ob / 2 + oc / 2;
        b = oa / 2 + oc / 2;
        c = oa / 2 + ob / 2;
        count++;
        //cerr << count << endl;
    }
    cout << count << endl;
    return 0;
}