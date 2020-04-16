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

char board[25][25];
int M, N, U, L, R, D;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 1; i <= 24; i ++) {
        for(int j = 1; j <= 24;j ++) {
            if(i%2 == 1) {
                if (j%2 == 1) {
                    board[i][j] = '#';
                }
                else {
                    board[i][j] = '.';
                }
            }
            else {
                if (j%2 == 1) {
                    board[i][j] = '.';
                }
                else {
                    board[i][j] = '#';
                }
            }
        }
    }

    cin >> M >> N;
    cin >> U >> L >> R >> D;
    for(int i = 1; i <= M; i ++) {
        for(int j= 1; j<= N; j ++) {
            cin >> board[i+U][j+L];
        }
    }
    for(int i = 1; i <= U + D + M; i ++) {
        for(int j= 1; j <= L + R + N; j ++) {
            cout << board[i][j];
        }
        cout <<"\n";
    }
}