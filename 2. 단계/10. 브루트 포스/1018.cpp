# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stdlib.h>
# include <cmath>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;

int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
char board[51][51];
char boardb[51][51];
int N, M;

int ans = 0;
int colw = 0;
int colb = 0;
int realans = MAX;

void work(char word, int indm, int indn, int countm, int countn) {
    // printf("%d\n", countn);
    if (board[indn][indm] != word) {
        board[indn][indm] = word;
        ans++;
        if (word == 'B') {
            if (countm < 7) {
                work('W', indm+1,indn, countm+1, countn);
            }
            if (countn < 7) {
                work('W', indm, indn+1, countm, countn+1);
            }
        }
        else {
            if (countm < 7) {
                work('B', indm+1,indn, countm+1, countn);
            }
            if (countn < 7) {
                work( 'B', indm, indn+1, countm, countn+1);
            }
        }
        
    }
    else {
        if (word == 'B') {
            if (countm < 7) {
                work( 'W', indm+1,indn, countm+1, countn);
            }
            if (countn < 7 ) {
                work( 'W', indm, indn+1, countm, countn+1);
            }
        }
        else {
            if (countm < 7) {
                work( 'B', indm+1,indn, countm+1, countn);
            }
            if (countn < 7 ) {
                work( 'B', indm, indn+1, countm, countn+1);
            }

        }

    }
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    for(int i = 0; i < N; i ++) {
        std::fill_n(board[i], M, '0');
    }
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < M; j ++) {
            cin >> board[i][j];
            boardb[i][j] = board[i][j];
        }
    }
    for(int i = 0; i < N-7; i ++) {
        
        for(int j = 0; j < M-7; j ++) {
            work('W',j,i,0,0);
            colw = ans;
            ans = 0;
            for(int a = 0; a < N; a ++) {
                for(int b = 0; b < M; b ++) {
                    board[a][b] = boardb[a][b];
                }
            }
            work('B', j, i, 0, 0);
            colb = ans;
            for(int a = 0; a < N; a ++) {
                for(int b = 0; b < M; b ++) {
                    board[a][b] = boardb[a][b];
                }
            }
            // cout << colw << " " << colb << "\n";
            realans = min(realans, min(colw, colb));
            colw = 0;
            colb = 0;
            ans = 0;
        }
    }
    cout << realans << "\n";


}