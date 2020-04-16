# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int board[22], n;

void cal(int n) {
    if(board[n] != -1) {
        
    }
    else {
        cal(n-2);
        cal(n-1);
        board[n] = board[n-1] + board[n-2];
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fill_n(board, 22, -1);
    board[1] = 1;
    board[0] = 0;
    cin >> n;
    if (n == 0) {
        cout << board[n]<<"\n";
    }
    else if (n == 1) {
        cout << board[n] <<"\n";
    }
    else {
        cal(n);
        cout << board[n]<<"\n";
    }

    return 0;
}
