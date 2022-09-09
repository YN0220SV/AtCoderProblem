#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, x = 0;
    cin >> n >> x;
    vector<int> a(n);
    long int sum = 0;

    for (long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    //cout <<"eee"<< a[0] << endl;
    for (long int i = 0; i < n; i++)
    {
        if (x >= a[i])
        {
            x -= a[i];
            sum++;
        }
        else
        {
            continue;
        }
        cerr << x << endl;
    }

    if(x!=0&&sum!=0&&sum==n)
    {
        sum--;
    }
    
    cout << sum << endl;
    return 0;

}