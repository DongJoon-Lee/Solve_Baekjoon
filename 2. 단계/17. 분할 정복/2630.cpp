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

int N, white=0, blue=0;
int board[130][130];
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

void check(int,int,int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        for(int j=1; j <= N; j ++) {
            cin >> board[i][j];
        }
    }
    check(1,1, N);
    cout << white << "\n" << blue << "\n";

    return 0;

}

void check(int a, int b, int n) {
    if (n == 1) {
        if (board[a][b] == 1) {
            blue +=1;
        }
        else {
            white += 1;
        }
    }
    else {
        int tok=0;
        for(int i = a; i < a+n; i ++) {
            for(int j = b; j < b+n; j ++) {
                int aa, bb;
                for(int k = 0; k < 4; k ++) {
                    aa = i + dir[k][0];
                    bb = j + dir[k][1];
                    if (a <= aa && aa < a + n && b <= bb && bb < b + n) {
                        if (board[i][j] != board[aa][bb]) {
                            tok = 1;
                            break;
                        }
                    }
                    if (tok) {
                        break;
                    }
                }
            }
            if (tok) {
                break;
            }
        }
        if (tok) {
            check(a, b, n/2);
            check(a+n/2, b, n/2);
            check(a, b+n/2, n/2);
            check(a+n/2, b+n/2, n/2);
        }
        else {
            if (board[a][b] == 1) {
                blue +=1;
            }
            else {
                white += 1;
            }
        }
    }
}