#include <bits/stdc++.h>
using namespace std;

int H, W;
string B[101];

int main()
{

    cin >> H >> W;
    for (int y = 0; y < H; y++)
    {
        cin >> B[y];
    }

    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < W; x++)
        {
            if (B[y][x] == '.')
            {
                int c = 0;
                for (int dx = -1; dx < 2; dx++)
                    for (int dy = -1; dy < 2; dy++)
                    {
                        if (dx == 0 && dy == 0)
                            continue;
                        int xx = x + dx;
                        int yy = y + dy;
                        if (0 <= xx && xx < W && 0 <= yy && yy < H)
                        {
                            if (B[yy][xx] == '#')
                                c++;
                        }
                    }
                B[y][x] = char('0' + c);
            }
        }
    }
    for (int y = 0; y < H; y++)
    {
        cout << B[y] << endl;
    }
}