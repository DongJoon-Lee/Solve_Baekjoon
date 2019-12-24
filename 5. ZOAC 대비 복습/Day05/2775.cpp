# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int T, k, n, board[15][15];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i < T; i ++) {
        for(int j = 1; j <15; j ++) {
            fill_n(board[j], 15, 0);
        }
        cin >> k >> n;
        for(int j = 1; j <= n; j ++) {
            board[0][j] = j;
        }
        for(int j = 1; j <= k; j ++) {
            board[j][1] = board[j-1][1];
        }
        for(int l = 2; l <= n; l ++) {
            for(int m = 1; m <= k; m ++) {
                board[m][l] = board[m][l-1] + board[m-1][l];
            }
        }
        cout << board[k][n]<<"\n";
        // for(int j = 14; j >=0; j --) {
        //     for(int l = 0; l < 15; l ++) {
        //         cout << board[j][l] <<" ";
        //     }
        //     cout <<"\n";
        // }
        
    }

    return 0;
}
