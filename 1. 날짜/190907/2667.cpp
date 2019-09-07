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

int N, ret=0, c=0;
vector <int> v;
int board[30][30];
int chk[30][30];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void cal();
void cal2(int, int, int);

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    cin >> N;
    for(int i = 0; i < 30; i ++) {
        fill_n(chk[i], 30, -1);
    }
    for(int i = 1; i <= N ; i ++) {
        for(int j = 1; j <= N ;j ++) {
            scanf("%1d", &board[i][j]);
        }
    }
    cal();
    cout << ret <<"\n";
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i ++) {
        cout << v[i]<<"\n";
    }

    return 0;
}

void cal() {
    int tmp;
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            if (board[i][j] == 0) {
                chk[i][j] = 1;
            }
            else {
                if (chk[i][j] != 1) {
                    v.pb(0);
                    cal2(c, i, j);
                    ret++;
                    c++;
                }
            }
        }
    }
}

void cal2(int c,int i, int j) {
    chk[i][j] = 1;
    board[i][j] = 2;
    v[c]+=1;
    int ii, jj;
    for(int k = 0; k < 4; k ++) {
        ii = i + dir[k][0];
        jj = j + dir[k][1];
        if (board[ii][jj] == 1 && chk[ii][jj] != 1) {
            cal2(c, ii, jj);
        }
    }
}