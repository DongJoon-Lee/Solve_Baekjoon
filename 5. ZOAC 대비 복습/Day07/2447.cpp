# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

char board[6563][6563];
int N;

void cal(int n, int x, int y) {
    for(int i = n/3; i < n/3*2; i ++) {
        for(int j = n/3; j < n/3*2; j ++) {
            board[i+x][j+y] = ' ';
        }
    }
    if (n > 3) {
        cal(n/3, x+0,y+0);
        cal(n/3, x+n/3, y+0);
        cal(n/3, x+n/3*2, y+0);
        cal(n/3, x+0, y+n/3);
        // cal(n/3, n/3, n/3);
        cal(n/3, x+n/3*2, y+n/3);
        cal(n/3, x+0, y+n/3*2);
        cal(n/3, x+n/3, y+n/3*2);
        cal(n/3, x+n/3*2, y+n/3*2);
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0;i <6563; i ++) {
        fill_n(board[i], 6563, '*');
    }
    cin >> N;

    cal(N, 0, 0);
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < N; j ++) {
            cout << board[i][j];
        }
        cout <<"\n";
    }
    return 0;
}


// 빈칸은 나누기3