#include <iostream>
using namespace std;

bool isTriangular(int num)
{
	if (num < 0)
		return false;

	int sum = 0;
	for (int n=1; sum<=num; n++)
	{
		sum = sum + n;
		if (sum==num)
			return true;
	}

	return false;
}

int main() {
	int n ;
      cin>>n;


	if (isTriangular(n))  cout << "YES";
	else  cout << "NO";

	return 0;
}
