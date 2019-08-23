# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <deque>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, M, cou=0, chk=0, tmp;
deque <int> d;
int board[52];

int ret(int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1; i <= N; i ++) {
        d.pb(i);
    }
    for(int i = 0; i < M; i ++) {
        cin >> board[i];
    }

    while(chk < M) {
        for(int i = 0; i < d.size(); i ++) {
            if (d[i] == board[chk]) {
                if (i < d.size()-i) {
                    while(board[chk] != d.front()) {
                        tmp = d.front();
                        d.pop_front();
                        d.pb(tmp);
                        cou++;
                    }
                    d.pop_front();
                    chk++;
                }
                else {
                    while(board[chk]!=d.front()) {
                        tmp = d.back();
                        d.pop_back();
                        d.push_front(tmp);
                        cou++;
                    }
                    d.pop_front();
                    chk++;
                }
            }
        }
    }
    cout << cou <<"\n";
    return 0;
}