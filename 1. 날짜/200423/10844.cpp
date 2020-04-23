/* 
Test Case

1
ans : 9

2
ans : 17

30
ans : 365808847

*/

// bottom-up

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
# include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
ll board[11][102];



int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 11;i ++) {
        fill_n(board[i], 102, 0);
    }
    cin >> N;
    for(int j = 1; j <= N; j ++) {
        for(int i = 0; i <= 9; i ++) {
            if (j>=2 && i == 0) {
                board[i][j] = board[i+1][j-1];
            }
            else if (j == 1) {
                board[i][j] = 1;
            }
            else {
                board[i][j] = (board[i-1][j-1] + board[i+1][j-1])%1000000000;
            }
        }
    }
    // for(int i = 0; i <= 9; i ++) {
    //     for(int j= 1; j <= N; j ++) {
    //         cout << board[i][j] <<" ";
    //     }
    //     cout <<"\n";
    // }
    ll sum = 0;
    for(int i = 1; i <= 9; i ++) {
        sum = (sum+board[i][N])%1000000000;
    }
    cout << sum <<"\n";
    return 0;
}

// top-down 모르겠다,,