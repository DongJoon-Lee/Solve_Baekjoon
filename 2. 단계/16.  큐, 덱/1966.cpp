# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int T, num;
int N, board[102], won;
int tmp, a, b;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i < T; i ++) {
        cin >> N >> won;
        queue<pair<int, int>> q;
        vector <int> ran;
        for(int j = 0; j < N; j ++) {
            cin >> tmp;
            q.push(mp(j, tmp));
            ran.pb(tmp);    
        }
        sort(ran.begin(), ran.end());
        num = 0;
        int chk = ran.size()-1;
        while(1) {
            if(q.front().second == ran[chk]) {
                if (q.front().first == won) {
                    num++;
                    break;
                }
                q.pop();
                num++;
                chk--;
            }
            else {
                a = q.front().first;
                b = q.front().second;
                q.pop();
                q.push(mp(a, b));
            }
        }
        if(N==1) {
            num = 1;
        }
        cout << num << "\n";
    }

}