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

int T, K;
int board[505][505]={0,}, inp[505]={0,};

int cal(int a, int b) {
    if (a == b) {
        return 0;
    }
    else if (board[a][b] != 0) {
        return board[a][b];
    }
    else {
        if (b - a != 1) {
            int ans = MAX;
            for(int i = 0;i < b-a; i ++) {
                ans = min(ans, cal(a, a+i)+ cal(a+i+1, b));
                // cout << ans;
            }
            board[a][b] += ans;
        }
        
        for(int j = a; j <= b; j ++) {
            board[a][b] += inp[j];
        }
        return board[a][b];
    }
}

int main (void) {
    cin >> T;
    for(int i = 0; i < T; i ++) {
        cin >> K;
        for(int j = 0; j < 505; j ++) {
            fill_n(board[j], 505, 0);
        }
        fill_n(inp, 505, 0);
        // board[505][505]={0,};
        // inp[505]={0,};
        // int board[K+1][K+1] = {0,};
        // int inp[K+1] = {0,};
        for(int j = 1; j <= K; j ++) {
            cin >> inp[j];
        }
        
        
        cout << cal(1, K) << "\n";
        // for(int j = 0; j < K+1; j ++) {
        //     for(int k = 0; k < K+1; k ++) {
        //         printf("%4d ", board[j][k]);
        //     }
        //     cout << "\n";
            
        // }
    }
}