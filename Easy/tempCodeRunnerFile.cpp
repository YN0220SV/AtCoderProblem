#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    bool flg = true;
    if(x==2)
    {
        cout << 2 << endl;
        return 0;
    }
    while(flg)
    {
        flg = false;
        x++;
        for (int i = 2; i < sqrt(x); i++)
        {
            //cout << x / i << endl;
            if (x % i == 0)
            {
                flg = true;
                break;
            }
            
        }
        //cout << x << endl;
        
    }
    cout << x << endl;
    return 0;
}