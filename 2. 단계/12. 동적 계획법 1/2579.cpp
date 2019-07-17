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
int board[301];
int b[301][2]; //0 직전에 올라옴 1 하나 앞에서 올라옴.

int main (void) {
    cin >> N;
    b[301][2] = {0,};
    for(int i = 1; i < N+1; i ++) {
        cin >> board[i];
    }
    b[1][0] = board[1];
    b[2][0] = b[1][0] + board[2];
    b[2][1] = board[2];
    for(int i = 3; i < N+1; i ++) {
        b[i][0] = b[i-1][1] + board[i];
        b[i][1] = max(b[i-2][0], b[i-2][1]) + board[i];
    }
    // for(int i = 1; i < N+1; i ++) {
    //     cout << b[i][0] << " " << b[i][1] << "\n";
    // }
    cout << max(b[N][0], b[N][1]) <<"\n";
}