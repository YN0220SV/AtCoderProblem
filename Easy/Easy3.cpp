// https: // atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a;
    int b;
    string S;
    cin >> n >> a >> b;
    cin >> S;
    int allcounter = 0;
    int kaigaikcounter = 0;
    char nows;
    for (int i = 0; i < n; i++)
    {
        nows = S[i];
        if(nows=='c')
        {
            cout << "No" << endl;
        }
        else if(nows=='a')
        {
            if(a+b>allcounter)
            {
                cout << "Yes"<< endl;
                allcounter++;
            }
            else{
                cout << "No" << endl;
            }
        }
        else if(nows=='b')
        {
            if ((a+b>allcounter)&&(b>kaigaikcounter))
            {
                cout << "Yes" << endl;

                kaigaikcounter++;
                //cout << kaigaikcounter;
                allcounter++;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}