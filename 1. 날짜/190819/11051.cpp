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
ll board[1002][1002];

int cal(int, int);

int main (void) {
    for(int i = 0; i < 1002; i ++) {
        fill_n(board[i], 1002, 0);
    }

    cin >> N >> K;
    cout << cal(N, K) << "\n";
    return 0;
}

int cal(int n, int r) {
    if (r == 0) {
        return 1;
    }
    else if (n == r) {
        return 1;
    }
    else if (board[n][r] != 0) {
        return board[n][r]%10007;
    }
    else {
        board[n][r] = cal(n-1, r-1)+ cal(n-1,r);
        return board[n][r]%10007;
    }
}