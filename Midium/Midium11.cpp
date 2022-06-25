#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n >> m;
    vector<pair<long int,long int>> a(n);
    vector<pair<long int,long int>> b(m);
    long int nowmanhat = 0;
    long int minnumber = 0;
    long int minmanhat = 4000000001;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i].first >> b[i].second;
    }

    for (int i = 0; i < n;i++)
    {
        minmanhat = 4000000001;
        for (int j = 0; j < m;j++)
        {
            nowmanhat = abs(a[i].first - b[j].first) + abs(a[i].second - b[j].second);
            if(nowmanhat<minmanhat)
            {
                minmanhat = nowmanhat;
                minnumber = j + 1;
            }
        }
        cout << minnumber << endl;
    }
    return 0;
}