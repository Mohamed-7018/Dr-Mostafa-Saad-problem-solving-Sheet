#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
		int distance, numOFcity, pos, sum = 0;
	cin >> numOFcity >> pos;

	vector<int> arr(numOFcity + 1);


	for (distance = 1;distance <= numOFcity;distance++)
	{
		cin >> arr[distance];
		sum += arr[distance];
	}


	for (distance = 1; distance<pos && distance <= numOFcity - pos ;distance++)
	{
		if (arr[pos + distance] + arr[pos - distance] == 1)
			sum--;
	}

	cout << sum;
	return 0;
	}