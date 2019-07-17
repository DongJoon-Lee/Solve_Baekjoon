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

int N;
ll ans = 0;
ll board[101][11];

int main (void) {
    cin >> N;
    for(int i = 0; i < 10; i ++) {
        board[0][i] = 1;
    }
    for(int i = 1; i < N+1; i ++) {
        board[i][0] = board[i-1][1]%1000000000;
        for(int j = 1; j < 9; j ++) {
            board[i][j] = (board[i-1][j-1] + board[i-1][j+1])%1000000000;
        }
        board[i][9] = (board[i-1][8])%1000000000;
    }   
    for(int i = 1; i < 10; i ++) {
        // cout << board[N-1][i];
        ans += board[N-1][i];
        ans %= 1000000000;
    }
    cout << ans << "\n";
}