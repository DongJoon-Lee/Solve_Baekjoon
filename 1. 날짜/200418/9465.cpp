// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <cstdlib>
// #include <queue>
// # include <cmath>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int T, n;
// int board[2][100002];

// int cal(int buy, int col) {
//     // buy가 0이면 모두 구입가능, 1이면 윗줄 구입했음, 2면 아랫줄구입했음
//     // col번째 줄 봐야됩니다.
//     if (col == n-1) {
//         if (buy == 0) {
//             return max(board[0][col], board[1][col]);
//         }
//         else if(buy == 1) {
//             return board[1][col];
//         }
//         else {
//             return board[0][col];
//         }
//     }
//     else {
//         if (buy == 0) {
//             return max(max(cal(0, col+1), board[0][col] + cal(1, col+1)), board[1][col] + cal(3, col+1));
//         }
//         else if (buy == 1) {
//             return max(cal(0, col+1), board[1][col] + cal(2, col +1));
//         }
//         else {
//             return max(cal(0, col+1), board[0][col] + cal(1, col+1));
//         }
//     }
// }

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> T;
//     for(int i = 0;i < T; i ++) {
//         cin >> n;
//         for(int j = 0; j < 2;j ++) {
//             for(int k = 0; k < n; k ++) {
//                 cin >> board[j][k];
//             }
//         }
//         cout << cal(0,0)<<"\n";
//     }

//     return 0;
// }

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

int T, n;
int board[2][100002]; //
int sav[3][100002]; // 0이면 안산거, 1이면 윗줄, 2면 아랫줄 불가능

int cal(int buy, int col) { // 0이면 둘 다, 1이면 윗줄, 2면 아랫줄
    if(col == 0) {
        if (buy == 0) {
            return sav[0][0];
        }
        else if (buy == 1) {
            return board[1][0];
        }
        else {
            return board[0][0];
        }
    }
    else {
        if(buy == 0) {
            if (sav[0][col] != -1) {
                return sav[0][col];
            }
            sav[0][col] = max(board[0][col] + cal(1, col-1), board[1][col] + cal(2, col-1));
            return sav[0][col];
        }
        else if (buy == 1) {
            if (sav[1][col] != -1) {
                return sav[1][col];
            }
            sav[1][col] = max(cal(0, col-1), board[1][col] + cal(2, col-1));
            return sav[1][col];
        }
        else {
            if (sav[2][col] != -1) {
                return sav[2][col];
            }
            sav[2][col] = max(cal(0, col-1), board[0][col] + cal(1, col-1));
            return sav[2][col];
        }
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    // for(int i = 0; i < 3; i ++) {
    //     fill_n(sav[i], 100002, -1);
    // }
    for(int i = 0; i < T; i ++) {
        cin >> n;
        for(int j = 0; j < 2; j ++) {
            for(int k = 0; k < n; k ++) {
                cin >> board[j][k];
            }
        }
        for(int a = 0; a < 3; a ++) {
            fill_n(sav[a], 100002, -1);
        }
        sav[0][0] = max(board[0][0], board[1][0]);
        cout << max(max(cal(0, n-1), cal(1, n-1)), cal(2, n-1))<<"\n";
    }

    return 0;
}