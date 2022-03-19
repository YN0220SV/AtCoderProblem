#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c;
    int sum = 0;
    int ans = 0;
    cin >> n >> m >> c;
    vector<int> b(n);
    int nowa = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nowa;
            sum += nowa * b[j];
        }
        if (sum + c > 0)
        {
            ans++;
        }
        sum = 0;
    }
    cout << ans <<endl;
}