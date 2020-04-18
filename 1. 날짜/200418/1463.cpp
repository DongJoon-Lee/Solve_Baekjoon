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

// int board[1000002];

// int N;
// int cal(int n) {
//     if (n == 1) {
//         return 0;
//     }
//     if (board[n] != -1) {
//         return board[n];
//     }
//     // cout << "¿©±â\n";
//     int ans = cal(n-1) + 1;
//     if (n % 3 == 0) {
//         ans = min(ans, 1 + cal(n/3));
//     }
//     if (n % 2 == 0) {
//         ans = min(ans, 1 + cal(n/2));
//     }
//     board[n] = ans;
//     return ans;

// }

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     fill_n(board, 1000002, -1);

//     cin >> N;
//     cout << cal(N)<<"\n";

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

int N;
int board[1000002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    fill_n(board, 1000002, MAX);

    board[1] = 0;
    for(int i = 1; i < N; i ++) {
        board[i+1] = min(board[i]+1, board[i+1]);
        if (i*2 < N+1) {
            board[i*2] = min(board[i*2], board[i] + 1);
        }
        if (i*3 < N+1) {
            board[i*3] = min(board[i*3], board[i] + 1);
        }
    }
    cout << board[N] <<"\n";

    return 0;
}