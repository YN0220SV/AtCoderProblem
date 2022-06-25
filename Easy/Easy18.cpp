#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int maxcount = 0;
    int count = 0;

    if (s[0] == 'A' || s[0] == 'T' || s[0] == 'C' || s[0] == 'G')
    {
        if (n == 1)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' || s[i] == 'T' || s[i] == 'C' || s[i] == 'G')
        {
            count++;
            if (maxcount <= count)
            {
                maxcount = count;
            }
        }
        else
        {

            count = 0;
        }
    }
    cout << maxcount << endl;
}