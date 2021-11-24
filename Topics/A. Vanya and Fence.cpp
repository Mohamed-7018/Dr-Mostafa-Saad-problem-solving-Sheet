
#include <iostream>

using namespace std;

int main()
{
int n , h ;
cin >> n >> h;
int w =0;

int a[n];

for (int i=0 ; i<n ; i++)
{
    cin >> a[i];
    if (a[i]<=h) w++;
    else w=w+2;
}

cout <<w;
return 0;
}
