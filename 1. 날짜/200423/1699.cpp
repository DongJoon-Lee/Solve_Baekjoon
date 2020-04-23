// bottom-up

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
int board[100002];


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin >> N;
    fill_n(board, 100002, MAX);
    for(int i = 1; pow(i, 2) <= N ;i ++) {
        board[(int)pow(i, 2)] = 1;
    }

    for(int i = 2; i <= N; i ++) {
        for(int j = 1; j < sqrt(i); j ++) {
            board[i] = min(board[i], board[(int)pow(j, 2)] + board[i-(int)pow(j, 2)]);
            // cout << "i : " << i << "   boar  " << board[(int)pow(j, 2)] + board[i-(int)pow(j, 2)] <<"\n";
        }
    }
    // for(int i = 0; i <= N; i ++) {
    //     cout << board[i] <<"\n";
    // }
    cout << board[N]<<"\n";

    return 0;
}


// //top-down

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
// int board[100002];

// int cal(int n) {
//     if (n == pow(sqrt(n), 2)) {
//         return 1;
//     }
//     if (board[n] != MAX) {
//         return board[n];
//     }
//     for(int i = 1; i < sqrt(n); i ++) {
//         board[n] = min(board[n], cal((int)pow(i, 2)) + cal(n - (int)pow(i, 2)));
//     }
//     return board[n];

// }


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     fill_n(board, 100002, MAX);
//     cin >> N;
//     cout << cal(N) <<"\n";


//     return 0;
// }
