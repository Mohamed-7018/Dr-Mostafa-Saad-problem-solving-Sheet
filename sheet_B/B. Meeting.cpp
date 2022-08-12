#include<bits/stdc++.h>

using namespace std;


int xpos[1009], ypos[1009], r[1009],n;
int dist(int x1, int y1, int x2, int y2)
{
    return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}
bool check(int x, int y)
{
    for (int i = 0; i < n; i++)
        if (dist(x, y, xpos[i], ypos[i]) <= r[i] * r[i])
            return 0;
    return 1;
}
int main()
{
    int x1, y1, x2, y2, ans = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    for (int i = 0; i < n; i++)
        cin >> xpos[i] >> ypos[i] >> r[i];

    for (int i = min(x1, x2); i <= max(x1, x2); i++)
        ans += check(i, y1) + check(i,y2);

    for (int i = min(y1, y2)+1; i < max(y1, y2); i++)
        ans += check(x1,i) + check(x2,i);

    cout << ans << endl;
    return 0;
}