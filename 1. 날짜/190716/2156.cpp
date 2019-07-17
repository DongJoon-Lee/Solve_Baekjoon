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
ll res = MIN;
ll board[10001];
ll drink[10001][2] = {0,};


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> board[i];
    }
    drink[0][0] = board[0];
    drink[0][1] = 0;
    drink[1][0] = max(board[1], drink[0][0] + board[1]);
    drink[1][1] = board[1];
    res = max(drink[1][0], drink[1][1]);
    // cout << drink[0][0] << " " << drink[0][1] <<"\n";
    // cout << drink[1][0] << " " << drink[1][1] <<"\n";
    for(int i = 2; i < N; i ++) {
        drink[i][0] = max(drink[i-1][1] + board[i], board[i]);
        drink[i][1] = max(max(drink[i-2][0], drink[i-2][1]) + board[i], board[i]);
        res = max(max(drink[i][0], drink[i][1]), res);
        // cout << drink[i][0] << " " << drink[i][1] <<"\n";
    }
    cout << res << "\n";

}