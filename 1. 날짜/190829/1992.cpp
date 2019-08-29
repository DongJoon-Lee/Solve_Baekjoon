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
int board[70][70];
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
string tmp;

void chk(int,int,int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cin >> tmp;
        for(int j= 0; j < N; j ++) {
            board[i][j+1] = tmp.at(j)-48;
        }
    }
    chk(1,1,N);
    cout<<"\n";
    return 0;
}


void chk(int a, int b, int n) {
    if(n == 1) {
        cout << board[a][b];
    }
    else {
        int tok=0;
        for(int i = a; i < a + n; i ++) {
            for(int j = b; j < b + n ; j ++) {
                int aa, bb;
                for(int k = 0; k < 4; k ++) {
                    aa = i + dir[k][0];
                    bb = j + dir[k][1];
                    if (a <= aa && aa < a + n && b <= bb && bb < b + n) {
                        if (board[aa][bb] != board[i][j]) {
                            tok = 1;
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
        if (!tok) {
            cout << board[a][b];
        }
        else {
            cout <<"(";
            for(int i = 0; i < 2; i ++) {
                for(int j = 0; j < 2; j ++) {
                    chk(a+n/2*i, b + n/2*j, n/2);
                }
            }
            cout<<")";
        }
    }
}