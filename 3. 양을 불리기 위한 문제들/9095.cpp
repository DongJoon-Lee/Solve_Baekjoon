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

// 조합 / n = n-1 n-2 n-3

int n, tmp;
int board[12];


int cal(int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    fill_n(board,12,0);
    board[1] = 1;
    board[2] = 2;
    board[3] = 4;
    for(int i = 0; i < n; i ++) {
        cin >> tmp;
        cout << cal(tmp) << "\n";
    }
    
    
}

int cal(int n) {
    if (board[n] != 0) {
        return board[n];
    }
    else {
        board[n] = cal(n-1) + cal(n-2) + cal(n-3);
        return board[n];
    }
}