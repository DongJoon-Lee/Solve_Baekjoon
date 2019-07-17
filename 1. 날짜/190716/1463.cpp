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
int board[1000001];

int ans(int n) {
    board[1] = 0;
    for(int i = 2; i < n+1; i ++) {
        board[i] = board[i-1] +1;
        if (i%3 == 0) {
            board[i] = min(board[i], board[i/3] + 1);
        }
        if (i % 2 == 0) {
            board[i] = min(board[i], board[i/2]+1);
        }
    }
    return board[n];
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    fill_n(board, 1000001, -1);
    cin >> N;
    cout << ans(N) <<"\n";

}