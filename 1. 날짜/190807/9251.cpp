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

char board[1002];
char board2[1002];
int board3[1002][1002];
int ans=0;
int cal(int st1, int end1, int st2, int end2) {
    if (end1 < st1 || end2 < st2) {
        return 0;
    }
    else if (board3[end1][end2] != -1) {
        return board3[end1][end2];
    }
    else {
        if (board[end1] == board2[end2]) {
            board3[end1][end2] = 1 + cal(st1, end1-1, st2, end2-1);
            return board3[end1][end2];
        }
        else {
            board3[end1][end2] = max(cal(st1, end1-1, st2, end2), cal(st1, end1, st2, end2-1));
            return board3[end1][end2];
        }
    }
}

// 메모이제이션 + LCS

int main (void) {
    cin >> board >> board2;
    int sizea = 0, sizeb = 0;
    for(int i = 0; i < 1002; i ++) {
        if (board[i] != 0) {
            sizea ++;
        }
        else {
            break;
        }
    }
    for(int i = 0; i < 1002; i ++) {
        if (board2[i] != 0) {
            sizeb ++;
        }
        else {
            break;
        }
    }
    for(int i = 0; i < 1002; i ++) {
        fill_n(board3[i], 1002, -1);
    }
    if (board[sizea-1]==board2[sizeb-1]) {
        cout << cal(0,sizea-2, 0, sizeb-2)+1 << "\n";
    }
    else {
        cout << max(cal(0,sizea-2, 0, sizeb-1),cal(0,sizea-1, 0, sizeb-2)) << "\n";
    }
    return 0;
}