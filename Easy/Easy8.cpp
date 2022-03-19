#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a >> b;
    string c = a + b;
    int k = stoi(c);
    int l = sqrt(k);
    int m = k / l;

    cerr << l << m << endl;
    if (m*l==k)
    {
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}