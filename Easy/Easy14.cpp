// https://atcoder.jp/contests/abc161/tasks/abc161_c
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    
    long long  a = 0;
    a = n / k;

    if(n-a*k>(a+1)*k-n)
    {
        ans = (a + 1) * k - n;
    }
    else
    {
        ans = n - a * k;
    }
    

    cout << ans << endl;
    return 0;
}