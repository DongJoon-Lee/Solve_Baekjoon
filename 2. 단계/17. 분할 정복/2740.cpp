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

int N, M, K;
int board[105][105];
int board2[105][105];
int boardans[105][105];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1; i <= N;i ++) {
        for(int j = 1; j <= M; j ++) {
            cin >> board[i][j];
        }
    }
    cin >> M >> K;
    for(int i = 1; i<=M; i ++) {
        for(int j = 1; j <= K; j ++) {
            cin >> board2[j][i];
        }
    }
    // for(int i = 1; i <= N;i ++) {
    //     for(int j = 1; j <= M; j ++) {
    //         cout<<board[i][j]<<" ";
    //     }
    //     cout <<"\n";
    // }
    // for(int i = 1; i <= N;i ++) {
    //     for(int j = 1; j <= M; j ++) {
    //         cout<<board2[i][j]<<" ";
    //     }
    //     cout <<"\n";
    // }

    for(int i = 1; i <= K; i ++) {
        for(int j = 1; j <= N; j ++) {
            boardans[j][i] = 0;
            for(int k = 1; k <= M; k ++) {
                boardans[j][i] += board[j][k] * board2[i][k];
            }
        }
    }

    
    
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= K; j ++) {
            cout << boardans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;

}



// 11 12
// 21 22
// 31 32

// 12 22 32
// 11 21 31

// 11 = 0
// 11 += 11*11 + 12*12


// 11 = 11*11 + 12*12
// 12 = 