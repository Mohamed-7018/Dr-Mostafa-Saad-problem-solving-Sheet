#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x,y,cnt=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        a[i]=x;
        b[i]=y;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}