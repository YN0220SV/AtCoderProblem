#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    long int sum = 0;
    vector<int> x(n);
    for (int i = 0; i < n;i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n;i++)
    {
        sum += min(x[i], k - x[i]);
    }
    cout << sum*2 << endl;
    return 0;
}