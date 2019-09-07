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

int N, M, ret=0, cou = 0;
int board[1005][1005];
int chk[1005][1005];
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
queue <pair<int, int>> q;

void cal();

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 1005; i ++) {
        fill_n(board[i], 1005, 0);
    }
    cin >> M >> N;
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= M; j ++) {
            cin >> board[i][j];
            if (board[i][j] == 1) {
                q.push(mp(i,j));
            }
        }
    }
    int tok=0;
    cal();
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= M; j ++) {
            if (board[i][j] == 0) {
                tok = 1;
                break;
            }
        }
    }
    if (tok) {
        cout << -1<<"\n";
    }
    else {
        cout << ret-1<<"\n";
    }
    return 0;
}

void cal() {
    int c = q.size();
    // cout << c <<"\n";
    if (c != 0) {
        for(int z = 0; z < c; z ++) {
            int qf = q.front().first, qs = q.front().second;
            chk[qf][qs] = 1;
            q.pop();
            if (board[qf][qs] == -1) {
                continue;
            }
            board[qf][qs] = 1;
            int ii, jj;
            for(int i = 0; i < 4; i ++) {
                ii = qf + dir[i][0];
                jj = qs + dir[i][1];
                if (chk[ii][jj] != 1&& board[ii][jj] == 0 &&  1 <= ii && ii <= N && 1 <= jj && jj <= M) {
                    q.push(mp(ii,jj));
                    chk[ii][jj] = 1;
                }
            }
        }
        ret += 1;
        cal();
    }
    
}