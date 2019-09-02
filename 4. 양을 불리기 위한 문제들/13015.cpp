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
char board[500][500];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < 500; i ++) {
        for(int j = 0; j < 500; j ++) {
            board[i][j] = ' ';
        }
    }
    cin >> N;
    for(int i = 1; i <= N; i ++) {
        board[1][i]='*';
        board[1][4*N-2-i]='*';
        board[2*N-1][i]='*';
        board[2*N-1][4*N-2-i]='*';
        board[i][i] = '*';
        board[2*N-i][i] = '*';
        board[i][4*N-2-i] = '*';
        board[2*N-i][4*N-2-i]='*';
        board[i][N-1+i]='*';
        board[2*N-i][N-1+i]='*';
        board[i][4*N-1-N-i]='*';
        board[2*N-i][4*N-1-N-i]='*';
    }


    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= 4*N-2-i; j ++) {
            cout<<board[i][j];
        }
        cout<<"\n";
    }
    for(int j = N-1; 1<= j; j --) {
        for(int i = 1; i <= 4*N-2-j; i ++) {
            cout<<board[j][i];
        }
        cout<<"\n";
    }
    return 0;
}


// 2n-3(빈칸개수)