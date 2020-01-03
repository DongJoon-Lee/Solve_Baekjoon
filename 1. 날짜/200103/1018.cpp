# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

char board[52][52];
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
int N, M, ans=MAX, tmp=0;
bool chk1[52][52];
bool chk2[52][52];
void cal1(int x, int y, int x1, int y1, char cha) { // 시작이 W
    int xx, yy;
    if (board[x1][y1] != cha) {
        tmp ++;
        chk1[x1][y1] = true;
        if (x1 == x + 7 && y1 == y + 7) {
            return ;
        }
        for(int i = 0; i < 4; i ++) {
            xx = x1 + dir[i][0];
            yy = y1 + dir[i][1];
            if (x <= xx && xx <= x+7 && y <= yy && yy <= y + 7 && chk1[xx][yy] == false) {
            if (cha == 'W') {
                cal1(x, y, xx, yy, 'B');
            }
            else {
                cal1(x, y, xx, yy, 'W');
            }
            }
        }
    }
    else {
        // tmp ++;
        chk1[x1][y1] = true;
        if (x1 == x + 7 && y1 == y + 7) {
            return ;
        }
        for(int i = 0; i < 4; i ++) {
            xx = x1 + dir[i][0];
            yy = y1 + dir[i][1];
            if (x <= xx && xx <= x+7 && y <= yy && yy <= y + 7 && chk1[xx][yy] == false) {
            if (cha == 'W') {
                cal1(x, y, xx, yy, 'B');
            }
            else {
                cal1(x, y, xx, yy, 'W');
            }
            }
        }   
    }
}

void cal2(int x, int y, int x1, int y1, char cha) { // 시작이 B
    int xx, yy;
    if (board[x1][y1] != cha) {
        tmp ++;
        chk2[x1][y1] = true;
        if (x1 == x + 7 && y1 == y + 7) {
            return ;
        }
        for(int i = 0; i < 4; i ++) {
            xx = x1 + dir[i][0];
            yy = y1 + dir[i][1];
            if (x <= xx && xx <= x+7 && y <= yy && yy <= y + 7 && chk2[xx][yy] == false) {
            if (cha == 'W') {
                cal2(x, y, xx, yy, 'B');
            }
            else {
                cal2(x, y, xx, yy, 'W');
            }
            }
        }
    }
    else {
        // tmp ++;
        chk2[x1][y1] = true;
        if (x1 == x + 7 && y1 == y + 7) {
            return ;
        }
        for(int i = 0; i < 4; i ++) {
            xx = x1 + dir[i][0];
            yy = y1 + dir[i][1];
            if (x <= xx && xx <= x+7 && y <= yy && yy <= y + 7 && chk2[xx][yy] == false) {
            if (cha == 'W') {
                cal2(x, y, xx, yy, 'B');
            }
            else {
                cal2(x, y, xx, yy, 'W');
            }
            }
        }   
    }
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 0;i < N; i ++){
        for(int j= 0; j < M; j ++) {
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < N-7; i ++) {
        for(int j = 0; j < M-7; j ++) {
            for(int k = 0; k < 52; k ++) {
                fill_n(chk1[k], 52, false);
                fill_n(chk2[k], 52, false);
            }
            cal1(i, j, i, j, 'W');
            ans = min(ans, tmp);
            // cout << "cal1 tmp : " << tmp <<"\n";
            tmp = 0;
            cal2(i, j, i, j, 'B');
            ans = min(ans, tmp);
            // cout << "cal2 tmp : " << tmp <<"\n";
            tmp = 0;
        }
    }
    cout << ans <<"\n";

    return 0;
}
