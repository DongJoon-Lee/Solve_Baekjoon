// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, M = 0, keep;
// int board[1001];
// int ans[1001];

// int main (void) {
//     fill_n(board, 1001, -1);
//     fill_n(ans, 1001, 1);
//     cin >> N;
//     for(int i = 1; i <= N; i ++) {
//         cin >> board[i];
//     }
//     for(int i = 1; i <= N; i ++) {
//         keep = board[i];
//         for(int j = i; j <= N; j ++) {
//             if (keep < board[j]) {
//                 ans[i] ++;
//                 keep = board[j];
//             }
//         }
//         if (M < ans[i]) {
//             M = ans[i];
//         }
//     }
//     cout << M << "\n";


    
// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, save = 0;
// int board[1002];
// int ans[1002];
// int M = 0;

// int main (void) {
//     cin >> N;
//     fill_n(board, 1002, 0);
//     fill_n(ans, 1002, 1);
//     for(int i = 1; i <= N; i ++) {
//         cin >> board[i];
//     }
//     for(int i = 1; i <= N; i ++) {
//         save = 0;
//         for(int j = 1; j < i; j ++) {
//             if (save < board[j] && board[j] < board[i]) {
//                 ans[i]++;
//                 save = board[j];
//             }
//         }
//         if (M < ans[i]) {
//             M = ans[i];
//         }

//     }
//     cout << M << "\n";
// }


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

int N, M = 0;
int board[1001];
int ans[1001];

int main (void) {
    cin >> N;
    fill_n(board, 1001, 0);
    fill_n(ans, 1001, 1);
    for(int i = 1; i <= N; i++) {
        cin >> board[i];
    }
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j< i; j ++) {
            if (board[j] < board[i] && ans[i] < ans[j] + 1) {
                ans[i] = ans[j] + 1;
            }
        }
        if (M < ans[i]) {
            M = ans[i];
        }

    }
    printf("%d\n", M);
}