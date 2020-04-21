# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
int board[4][1000002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 4; i ++) {
        fill_n(board[i], 1000002, MAX);
    }
    cin >> N;
    for(int i = 1; i < 4; i ++) {
        board[i][1] = 0;
        int tmp = 1;
        while(tmp <= N) {
            board[i][tmp+1] = min(board[i][tmp+1], min(board[i-1][tmp+1], board[i][tmp] + 1));
            if (tmp*2 <= N) {
                board[i][tmp*2] = min(board[i][tmp*2], min(board[i-1][tmp*2], board[i][tmp]+1));
            }
            if (tmp*3 <= N) {
                board[i][tmp*3] = min(board[i][tmp*3], min(board[i-1][tmp*3], board[i][tmp]+1));
            }
            tmp++;
        }
    }
    // for(int i = 1; i < 4; i ++) {
    //     for(int j = 1; j <= N; j ++) {
    //         cout << board[i][j] << " ";
    //     }
    //     cout <<"\n";
    // }
    cout << board[3][N] <<"\n";



    return 0;
}