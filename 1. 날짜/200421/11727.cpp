// // bottom-up

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

// int n;
// ll board[1002];


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> n;
//     board[1] = 1;
//     board[2] = 3;
//     for(int i = 3; i <= n; i ++) {
//         board[i] = (board[i-1] + board[i-2] + board[i-2])%10007;
//     }
//     cout << board[n]<<"\n";



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

int n;
ll board[1002];

ll cal(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 3;
    }
    if (board[n] != -1) {
        return board[n];
    }
    board[n] = (cal(n-1) + 2*cal(n-2))%10007;
    return board[n];
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    fill_n(board, 1002, -1);
    cout << cal(n)<<"\n";

    return 0;
}