#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> a(n);
    int al = 0;
    int bo = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cerr << a[0] << endl;
    while (a.size() > 0)
    {
        al+=a[0];
        a.erase(a.begin());

        if(a.size()>0)
        {
            bo+=a[0];
            a.erase(a.begin());
            
        }
        cerr << al << " " << bo << endl;
    }

    cout << abs(al - bo) << endl;
    return 0;
}