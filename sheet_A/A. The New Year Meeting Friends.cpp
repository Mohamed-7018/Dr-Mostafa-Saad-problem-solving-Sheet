#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define mci map<char,int>


int mas[3];
int main() {
    cin >> mas[0] >> mas[1] >> mas[2];
    sort(mas, mas + 3);
    cout << mas[2] - mas[0];
}