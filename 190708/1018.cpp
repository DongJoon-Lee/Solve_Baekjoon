# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;
int a, b; // a == y, b == x
int ans = 0;

int countw = 0, countb = 0;
char board[51][51];
char board2[51][51];
int dix[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int solve(char charco, int x, int y, int leftx, int lefty) {
    if (board[y][x] != charco) {
        ans++;
    }
    leftx--;
    if (leftx) {
        if (charco =='B') {
            solve('W', x+1,y,leftx,lefty);
        }
        else {
            solve('B', x+1,y,leftx,lefty);
        }
    }
    lefty--;
    if (lefty) {
        if (charco == 'B') {
            solve('W', x, y+1, leftx, lefty);
        }
        else {
            solve('B', x, y+1, leftx, lefty);
        }
    }
}

void solve(char charco, int x, int y) {
    if (board[y][x] != charco) {
        board[y][x] = charco;
        ans++;
    }
    if (y != a-1) {
        if (charco == 'B') {
            solve('W', x, y+1);
        }
        else {
            solve('B', x, y+1);
        }
    }
    if (x != b-1) {
        if (charco == 'B') {
            solve('W', x+1, y);
        }
        else {
            solve('B', x+1, y);
        }
    }

}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    
    for(int i = 0; i < a; i ++) {
        std::fill_n(board[i], b, '0');
    }
    for(int i = 0; i < a; i ++) {
        for(int j = 0; j < b; j ++) {
            cin >> board[i][j];
            board2[i][j] = board[i][j];
        }
    }
    int z = 0;
    int y = 0;
    while(z+8 <= a) {
        while(y + 8 <=b ) {
            countw = min(countw, solve('W', z, y, 8, 8));
            ans = 0;
            countb = min(countb, solve('B', z, y, 8, 8));
            ans = 0;
            y++;
        }
        z++;
    }
    cout << min(countw, countb) << countw << countb << "\n";
    for(int i = 0; i < a; i ++) {
        for(int j = 0; j < b; j ++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }












    // solve('W', 0, 0);
    // countw = ans;
    // cout << ans << "\n";
    // ans = 0;
    // cout << ans << "\n";
    // for(int i = 0; i < a; i ++) {
    //     for(int j = 0; j < b; j ++) {
    //         cout << board[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // for(int i = 0; i < 51; i ++) {
    //     for(int j = 0; j <51; j ++) {
    //         board[i][j] = board2[i][j];
    //     }
    // }
    // solve('B', 0, 0);
    // countb = ans;
    // cout << ans << "\n";
    // cout << min(countw, countb) << countw << countb << "\n";
    // // 출력해봄(잘 들어가는지)
    // for(int i = 0; i < a; i ++) {
    //     for(int j = 0; j < b; j ++) {
    //         cout << board[i][j] << " ";
    //     }
    //     cout << "\n";
    // }


    

}