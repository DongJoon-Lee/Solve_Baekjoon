/* 
Test Case

4
1 5 6 7
ans : 10

5
10 9 8 7 6
ans : 50

10
1 1 2 3 5 8 13 21 34 55
ans : 55

10
5 10 11 12 13 30 35 40 45 47
ans : 50

4
5 2 8 10
ans : 20

4
3 5 15 16
ans : 18

6
1 10 1 1 1 1
ans : 30

14
10 25 10 48 31 21 33 6 37 6 43 35 1 20
ans : 175

16
3 32 39 41 39 3 39 34 32 9 20 13 37 26 16 39
ans : 256

12
25 111 8 113 4 111 29 100 99 118 47 101
ans : 666

5
1 6 8 12 10

ans : 14

10
1 100 160 1 1 1 1 1 1 1

ans : 520

*/

// //bottom - up

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <cstdlib>
// # include <queue>
// # include <cmath>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N;
// int board[1002][1002], sav[1002];


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     for(int i = 0; i < 1002; i ++) {
//         fill_n(board[i], 1002, 0);
//     }
//     cin >> N;
//     for(int i = 1; i <= N; i ++) {
//         cin >> sav[i];
//         board[i][i] = sav[i];
//     }
//     // for(int i = 1; i <= N; i ++) {
//     //     for(int j= 1; j <= N;j ++) {
//     //         cout << board[i][j] <<" " ;
//     //     }
//     //     cout <<"\n";
//     // }
//     for(int i = 1; i<= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             if (j < i) {
//                 board[i][j] = board[i-1][j];
//             }
//             else {
//                 board[i][j] = max(board[i][j], max(board[i-1][j], board[i][j-i] + sav[i]));
//             }
//         }
//     }
//     // for(int i = 1; i <= N; i ++) {
//     //     for(int j= 1; j <= N;j ++) {
//     //         cout << board[i][j] <<" " ;
//     //     }
//     //     cout <<"\n";
//     // }
//     cout << board[N][N]<<"\n";

//     return 0;
// }


// top-down

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
# include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
int board[1002][1002];
int sav[1002];

int cal(int cou, int n) {
    if (n == 1) {
        return sav[1];
    } 
    if (n == 0) {
        return 0;
    }
    if(cou == 0) {
        return 0;
    }
    if(board[cou][n] != 0) {
        return board[cou][n];
    }
    if (cou > n) {
        board[cou][n] = cal(cou-1, n);
        return board[cou][n];
    }
    else {
        board[cou][n] = max(board[cou][n], max(cal(cou-1, n), cal(cou, n - cou) + sav[cou]));
        return board[cou][n];
    }
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i <= N; i ++) {
        fill_n(board[i], 1002, 0);
    }
    cin >> N;
    for(int i = 1; i <= N;i ++) {
        cin >> sav[i];
        // board[i][i] = sav[i];
    }
    cout<<cal(N, N)<<"\n";
    // for(int i = 1;i <= N; i ++) {
    //     for(int j= 1; j <= N;j ++) {
    //         cout << board[i][j] <<" ";
    //     }
    //     cout <<"\n";
    // }

    return 0;
}