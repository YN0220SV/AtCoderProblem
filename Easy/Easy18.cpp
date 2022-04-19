#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int maxcount = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i + 1] == 'A' || s[i + 1] == 'T' || s[i + 1] == 'C' || s[i + 1] == 'G')
        {
            count++;
        }
        else
        {
            if(maxcount<count)
            {
                maxcount = count;
                count = 0;
            }
            else{
                count = 0;
            }
        }
    }
    cout << maxcount << endl;
}