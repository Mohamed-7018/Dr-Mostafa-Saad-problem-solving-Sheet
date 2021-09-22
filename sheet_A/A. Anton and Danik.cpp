#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
    cin >> n;
	string a; cin >> a;
	int A = 0, D= 0;
	for (int i = 0; i < n; i++)
    {
    	if (a[i] == 'A') A++;
		else D++  ;
    }

	if (A > D) cout << "Anton" << endl;
	if (A < D) cout << "Danik" << endl;
	if (A == D) cout << "Friendship" << endl;
	return 0;
}