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
int board[10001];
int ans[10001];

int main (void) {
    cin >> N;
    fill_n(board, 10001, 0);
    fill_n(ans, 10001, 0);
    for(int i = 1; i <= N; i ++) {
        cin >> board[i];
    }
    ans[1] = board[1];
    ans[2] = board[1] + board[2];
    for(int i = 3; i <= N; i ++) {
        ans[i] = max(max(ans[i-3] + board[i-1] + board[i], ans[i-2] + board[i]), ans[i-1]);
    }
    cout << ans[N] << "\n";
}