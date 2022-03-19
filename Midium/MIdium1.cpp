#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    int nexti = 1;
    for (int i = 1; i <n+1; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 100000;i++)
    {
        nexti = a[nexti];
        if(nexti==2)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

}