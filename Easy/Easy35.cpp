#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    set<char> sets;
    int l = s.length();
    for (int i = 0; i < l;i++)
    {
        sets.insert(s[i]);
    }
    string alp = "abcdefghijklmnopqrstuvwxyz";
    int setsize = alp.size();
    for (int i = 0; i <setsize ;i++)
    {
        auto it = sets.find(alp[i]);
        if(it==sets.end())
        {
            cout << alp[i] << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
