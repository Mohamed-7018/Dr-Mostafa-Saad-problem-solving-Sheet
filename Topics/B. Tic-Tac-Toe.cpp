#include <cstring>
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>



#define sz(v) (int)v.size()


using namespace std;



bool is_win(string config) {

	bool rows =
		(config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
		(config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
		(config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

	bool columns =
		(config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
		(config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
		(config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

	bool diagonals =
		(config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
		(config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

	return rows || columns || diagonals;
}


int main () {
    int t;
    cin>> t;

    for (int i=t; i>0; i--) {
        string board = "";
        for (int i=0; i<3; i++) {
            string row;
            cin>> row;
            board += row;
        }


       string start = ".........";
       queue <pair<string,bool> > qu;
       qu.push ({start,1});


       string ans= "no";
       	while (sz(qu)) {
			string cur = qu.front().first;
			bool cur_player = qu.front().second;
			qu.pop();
			if (cur == board)  {
				ans = "yes";
				break;
			}
			if (is_win(cur)) continue;
			for (int i = 0; i < 9; i++) {
				if (cur[i] == '.') {
					cur[i] = (cur_player ? 'X' : 'O');
					if (cur[i] == board[i])
						qu.push({ cur, 1 ^ cur_player });
					cur[i] = '.';
				}
			}
		}

       cout << ans << endl;

    }
           return 0;


}
