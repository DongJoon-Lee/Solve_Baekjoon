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

int dir[4][2] = {{1,0}, {-1,0},{0,1},{0,-1}};

int N, ansmin1=0, ans0=0, ans1=0;
int board[2500][2500];

void chk(int,int,int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        for(int j= 1; j <= N; j ++) {
            cin >> board[i][j];
        }
    }
    chk(1,1,N);
    cout << ansmin1<<"\n"<<ans0<<"\n"<<ans1<<"\n";
    return 0;
}

void chk(int a, int b, int n) {
    if (n == 1) {
        if (board[a][b] == -1) {
            ansmin1+=1;
        }
        else if (board[a][b] == 0) {
            ans0 += 1;
        }
        else {
            ans1 += 1;
        }
    }
    else {
        int tok = 0;
        for(int i = a; i < a + n; i ++) {
            for(int j = b; j < b + n; j ++) {
                int aa, bb;
                for(int k = 0; k < 4; k ++) {
                    aa = i + dir[k][0];
                    bb = j + dir[k][1];
                    if (a <= aa && aa < a + n && b <= bb && bb < b + n) {
                        if(board[i][j] != board[aa][bb]) {
                            tok=1;
                            break;
                        }
                    }
                }
                if (tok) {
                    break;
                }
            }
            if (tok) {
                break;
            }
        }
        if (tok) {
            for(int i = 0; i < 3; i ++) {
                for(int j = 0; j < 3; j ++) {
                    chk(a+n/3*i, b+n/3*j, n/3);
                }
            }
        }
        else {
            if (board[a][b] == -1) {
                ansmin1+=1;
            }
            else if (board[a][b] == 0) {
                ans0 += 1;
            }
            else {
                ans1 += 1;
            }
        }
    }
}