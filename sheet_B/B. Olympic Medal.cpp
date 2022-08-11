// working.cpp by Bill Weinman <http://bw.org/>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=0,y=0,z=5000;
	int n,m,k,A,B,Xn,Ym,Zk;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>Xn;
		x=max(x,Xn);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>Ym;
		y=max(y,Ym);
	}
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>Zk;
		z=min(Zk,z);
	}
	cin>>A>>B;
	double c;
	c=((double)(A*z))/(y*B);
	c+=1.0;
	double r1=pow(x,2);
	double r2=sqrt(r1/c);
	printf("%.12lf\n",r2);
	return 0;
}