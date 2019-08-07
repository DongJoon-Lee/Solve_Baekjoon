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

int N, K;
int board[102][2] = {0,};

int main (void) {
    cin >> N >> K;
    for(int i = 1; i <= N; i ++) {
        cin >> board[i][0] >> board[i][1];
    }
    int ret[N+1][K+1] = {0,};
    for(int i = 0; i < N+1; i ++) {
        fill_n(ret[i], K+1, 0);
    }

    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= K; j ++) {
            ret[i][j] = ret[i-1][j];
            if (board[i][0]<= j) {
                ret[i][j] = max(ret[i][j], ret[i-1][j-board[i][0]]+ board[i][1]);
            }
        }
    }
    // for(int i = 1; i <= N; i ++) {
    //     for(int j = 1; j <= K; j ++) {
    //         cout << ret[i][j] << " " ;
            
    //     }
    //     cout << "\n";
    // }
    cout << ret[N][K] << "\n";
}