#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string a = "|" + s + "|";
    long int counter = 0;
    long int left = 0;
    long int right = 0;
    for (long i = 0; i < a.length(); i++)
    {
        for (long int j = i; j >= 0; j--)
        {
            if (a[j] == '<')
            {
                left++;
            }
            else
            {
                break;
            }
        }
        for (long int j = i; j < a.length(); j++)
        {
            if (a[j + 1] == '>')
            {
                right++;
            }
            else
            {
                break;
            }
        }
        // cout << left << " " << right << endl;
        // cout << max(right, left) << endl;
        counter += max(right, left);

        right = 0;
        left = 0;
    }
    cout << counter << endl;
}