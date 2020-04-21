//bottom-up

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
ll board[2][1000002];


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    board[0][1] = 0;
    board[1][1] = 1;
    board[0][2] = 1;
    board[1][2] = 1;
    for(int i = 3; i <= N; i ++) {
        board[0][i] = (board[0][i-2] + board[1][i-2])%15746;
        board[1][i] = (board[0][i-1] + board[1][i-1])%15746;
        // 피보나치다 사실
    }
    // for(int i = 0; i < 2; i ++) {
    //     for(int j = 1; j <= N; j ++) {
    //         cout << board[i][j] <<" ";
    //     }
    //     cout <<"\n";
    // }
    cout << (board[0][N] + board[1][N])%15746<<"\n";
    

    return 0;
}