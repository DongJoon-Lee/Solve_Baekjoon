// // # include <string>
// // # include <iostream>
// // # include <vector>
// // # include <queue>
// // # include <stdio.h>
// // # include <algorithm>
// // # include <ctype.h>
// // # include <cstdlib>
// // #include <queue>
// // # include <cmath>
// // using namespace std;
// // typedef long long ll;
// // # define pb push_back
// // # define mp make_pair

// // const int MAX = 2147483647;
// // const int MIN = -2147483648;

// // int n, k, board[102], ans[10002];

// // int main (void) {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);

// //     cin >> n >> k;
// //     fill_n(board, 102, -1);
// //     fill_n(ans, 10002, MAX);
// //     for(int i = 0; i < n; i ++) {
// //         cin >> board[i];
// //     }
// //     ans[0] = 0;
// //     for(int i = 0; i < n; i ++) {
// //         int tmp = board[i];
// //         while(tmp <= k) {
// //             ans[tmp] = min(ans[tmp], ans[tmp-board[i]]+1);
// //             tmp += board[i];
// //         }
// //     }
// //     // for(int i = 0; i <= k+2; i ++) {
// //     //     cout << ans[i]<<"\n";
// //     // }
// //     if (ans[k] != MAX) {
// //         cout << ans[k] <<"\n";
// //     }
// //     else {
// //         cout <<"-1\n";
// //     }
// //     // cout << ans[k] <<"\n";


// //     return 0;
// // }


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

// int n, k;
// int board[102];
// int ans[10002];

// int cal(int idx, int price) {
//     if (idx == n-1 && ) {
//         reu
//     }
// }

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     fill_n(ans, 10002, MAX);

//     cin >> n >> k;
//     for(int i = 0; i < n; i ++) {
//         cin >> board[i];
//     }
//     cout << cal(0, k)<<"\n";


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

int n, k;
int board[102];
int cal[102][10002];


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < 102; i ++) {
        fill_n(cal[i], 10002, MAX);
    }

    cin >> n >> k;
    for(int i = 0; i < n; i ++) {
        cin >> board[i];
    }
    for(int i = 0; i < n; i ++) {
        int tmp = board[i];
        cal[i][0] = 0;
        for(int j = 1; j <= k; j ++) {
            if (i == 0) {
                if (j % tmp == 0) {
                    cal[i][j] = cal[i][j-tmp]+1;
                }
            }
            else if(j >= board[i]) {
                if (cal[i][j-tmp] != MAX) {
                    cal[i][j] = min(cal[i-1][j], cal[i][j-tmp]+1);
                }
                else {
                    cal[i][j] = cal[i-1][j];
                }
            }
            else {
                cal[i][j] = cal[i-1][j];
            }
        }
    }
    // for(int i = 0; i < n; i ++) {
    //     for(int j = 0; j <= k; j ++) {
    //         cout << cal[i][j]<<" ";
    //     }
    //     cout <<"\n";
    // }
    if (cal[n-1][k] == MAX) {
        cout << -1<<"\n";
    }
    else {
        cout << cal[n-1][k]<<"\n";
    }

    return 0;
}