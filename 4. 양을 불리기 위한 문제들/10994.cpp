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

int N, tmp;
char board[500][500];
void cal(int,int,int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < 500; i ++) {
        fill_n(board[i], 500, ' ');
    }
    tmp = 1 + (N-1)*4;
    cal(1,1,N);
    for(int i = 1; i <= 4*N-3; i ++) {
        for(int j = 1; j <= 4*N-3; j ++) {
            cout << board[i][j];
        }
        cout <<"\n";
    }

}

void cal (int a, int b, int n) {
    if(n == 1) {
        board[a][b] = '*';
    }
    else {
        for(int i = 0; i < 4*n-3; i ++) {
            board[a+i][b] = '*';
            board[a+i][b+4*n-4]='*';
            board[a][b+i] = '*';
            board[a+4*n-4][b+i] = '*';
        }
        cal(a+2,b+2,n-1);
    }
}