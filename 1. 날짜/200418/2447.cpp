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

char board[6563][6563];
int N;

void cal(int start1, int start2, int size) {
    if (size == 3) {
        board[start1 + 1][start2+ 1] = ' ';
    }
    else {
        int siz = size/3;
        for(int i = 0; i < siz; i ++) {
            for(int j = 0; j < siz; j ++) {
                board[start1 + siz+i][start2 + siz + j] = ' ';
            }
        }
        cal(start1, start2, siz);
        cal(start1 + siz, start2, siz);
        cal(start1 + siz*2, start2, siz);
        cal(start1, start2 + siz, siz);
        cal(start1, start2 + siz*2, siz);
        cal(start1 + siz, start2 + siz*2, siz);
        cal(start1 + siz*2, start2 + siz, siz);
        cal(start1 + siz*2, start2 + siz*2, siz);
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 6563; i ++) {
        fill_n(board[i], 6563, '*');
    }

    cin >> N;
    cal(1, 1, N);
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            cout << board[i][j];
        }
        cout <<"\n";
    }

    return 0;
}