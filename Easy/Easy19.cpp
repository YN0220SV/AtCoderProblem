#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int m=0;
    int x=0;
    cin >> n >> m >> x;
    int sum = 0;
    int sumb = 0;
    vector<int> a(m);
    for (int i = 0; i < m;i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m;i++)
    {
        if(a[i]<x)
        {
            sum++;
        }
        else
        {
            sumb++;
        }
    }

    cout << min(sum, sumb) << endl;
}