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

int N, M, ans, tmp = MAX;
char board[52][52];
char board2[52][52];

int cal(int a, int b) {
    ans = 0;
    for(int i = a; i <= a+7; i ++) {
        for(int j = b; j <= b+7; j ++) {
            if (board[i-a+1][j-b+1] != board2[i][j]) {
                ans ++;
            }
        }
    }
    // cout << "ab" << a << " " << b << " " << ans <<"\n";
    return ans;
}

int cal2(int a, int b) {
    ans = 0;
    for(int i = a; i <= a + 7; i ++) {
        for(int j = b; j <= b + 7; j ++) {
            if (board[i-a+1][j-b+2] != board2[i][j]) {
                ans ++;
            }
        }
    }
    // cout << "ab" << a << " " << b << " " << ans <<"\n";
    return ans;
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    for(int i = 1; i < 52; i ++) {
        for(int j = 1; j < 52; j ++) {
            if((i+j)%2) {
                board[i][j] = 'W';
            }
            else {
                board[i][j] = 'B';
            }
        }
    }

    // 11ÀÌ B, 12°¡ W
    cin >> N >> M;
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= M; j ++) {
            cin >> board2[i][j];
        }
    }
    
    for(int i = 1; i <= N - 7; i ++) {
        for(int j = 1; j <= M - 7; j ++) {
            tmp = min(tmp, min(cal(i, j), cal2(i, j)));
        }
    }

    cout << tmp <<"\n";



    return 0;
}