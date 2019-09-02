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

int N, tok;
ll sum;
int board[105][105];
int chk[10005];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    tok = 1;
    sum = N*(N*N+1)/2;
    fill_n(chk, 10005, -1);
    for(int i = 1;i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            cin >> board[i][j];
            if (chk[board[i][j]] != -1) {
                tok = 0;
                break;
            }
            else {
                chk[board[i][j]] = 1;
            }
        }
        if (!tok) {
            break;
        }
    }
    if (!tok) {
        cout << "FALSE\n";
        return 0;
    }
    for(int i= 1; i <= N; i ++) {
        int tmpsum=0;
        for(int j = 1; j <= N; j ++) {
            tmpsum += board[i][j];
        }
        if (tmpsum != sum) {
            tok = 0;
            break;
        }
    }
    if(tok) {
        for(int i = 1; i <= N; i ++) {
            int tmpsum = 0;
            for(int j = 1; j <= N; j ++) {
                tmpsum += board[j][i];
            }
            if (tmpsum != sum) {
                tok=0;
                break;
            }
        }
    }
    if(tok) {
        int tmpsum = 0;
        for(int i = 1; i<= N; i ++) {
            tmpsum += board[i][i];
        }
        if (tmpsum != sum) {
            tok = 0;
        }
    }
    if (tok) {
        int tmpsum = 0;
        for(int i = 1; i<=N; i --) {
            tmpsum += board[i][N-i+1];
        }
        if (tmpsum != sum) {
            tok = 0;
        }
    }
    if (!tok) {
        cout << "FALSE\n";
    }
    else {
        cout << "TRUE\n";
    }

    return 0;

}