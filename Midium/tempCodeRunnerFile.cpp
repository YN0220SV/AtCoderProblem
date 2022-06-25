#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    string s;
    cin >> n;
    cin >> s;
    string front = " ";
    string back = " ";
    multiset<char> frontset;
    multiset<char> backset;
    set<char> result;
    int count = 0;
    int max = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            frontset.insert(s[j]);
        }
        cerr << "frontset= " ;
        for (const auto &a : frontset)
        {
            cerr << a;
        }
        cerr << endl;

        for (int j = i; j < n; j++)
        {
            backset.insert(s[j]);
        }
        cerr << "backset= " ;
        for (const auto &b : backset)
        {
            cerr << b;
        }
        cerr << endl;


        set_intersection(frontset.begin(), frontset.end(), backset.begin(), backset.end(), inserter(result, result.end()));
        cerr << "intersection= ";
        for (const auto &c : result)
        {
            cerr << c ;
        }
        cerr << endl;


        count=result.size();
        if(max<=count)
        {
            max = count;
        }
        count = 0;

        frontset.clear();
        backset.clear();
        result.clear();
    }

    cout<<max<<endl;
    return 0;
    
}