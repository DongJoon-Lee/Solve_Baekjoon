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
char board[250][250];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i = 0; i < 250; i ++) {
        fill_n(board[i], 250, ' ');
    }

    for(int i = 1;i <= N;i ++) {
        for(int j= 1; j<= i; j++) {
            board[i][j] = '*';
            board[i][2*N-j+1]='*';
        }
    }
    for(int i = 1; i < N; i ++) {
        for(int j = 1; j <= i; j ++) {
            board[2*N-(i)][j] = '*';
            board[2*N-i][2*N-j+1]='*';
        }
    }



    for(int i = 1;i  < N*2; i ++) {
        for(int j = 1;j <= N*2; j ++) {
            cout<<board[i][j];
        }
        cout<<"\n";
    }
}