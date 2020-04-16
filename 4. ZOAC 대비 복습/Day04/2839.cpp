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

int N;
int board[5002];


int cou(int N) {
    if (board[N] != 0) {
        if (N == 3 || N == 5) {
            return board[N];
        }
        else if(N==1 || N == 2|| N == 4){
            return 10000;
        }
        else {
            return board[N];
        }
    }
    else {
        board[N] = 1 + min(cou(N-3), cou(N-5));
        return board[N];
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    fill_n(board, 5002, 0);
    board[3] = 1;
    board[5] = 1;
    board[1] = -1;
    board[2] = -1;
    board[4] = -1;
    if (cou(N) >= 10000) {
        cout << -1 <<"\n";
    }
    else {
        cout << cou(N)<<"\n";
    }
    return 0;
}
