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

// int N, gcd;
// int board[102];

// int findGcd(int, int);

// int main (void) {
//     fill_n(board, 102, 0);
//     cin >> N;
//     for(int i = 0; i < N ; i ++) {
//         cin >> board[i];
//     }
//     gcd = board[0];
//     for(int i = 1; i < N ; i ++) {
//         gcd = findGcd(gcd, board[i]);
//     }
//     for(int i = gcd; i <= board[N-1]-board[0]; i += gcd) {
//         int tok = 0;
//         for(int j = 1; j < N; j ++) {
//             if (board[j]%i != board[j-1]%i) {
//                 tok = 1;
//                 break;
//             }
//         }
//         if (tok==0) {
//             // cout << "여기\n";
//             cout <<i << " ";
//         }
//     }
//     cout << "\n";
//     return 0;
// }

// int findGcd(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return findGcd(b, a%b);
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

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}