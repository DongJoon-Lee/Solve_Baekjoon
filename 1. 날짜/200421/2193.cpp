// // bottom-up
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

// int N;
// ll board[2][92];


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     board[0][1] = 0;
//     board[1][1] = 1;
//     for(int i = 2; i <= N; i ++) {
//         board[0][i] = board[0][i-1] + board[1][i-1];
//         board[1][i] = board[0][i-1];
//     }
//     cout << board[0][N] + board[1][N] <<"\n";


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
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
ll board[2][92];

ll cal1(int);

ll cal0(int n) {
    if (n == 1) {
        return 0;
    }
    else if (board[0][n] != -1) {
        return board[0][n];
    }
    board[0][n] = cal0(n-1) + cal1(n-1);
    return board[0][n];
}

ll cal1(int n) {
    if (n == 1) {
        return 1;
    }
    else if (board[1][n] != -1) {
        return board[1][n];
    }
    board[1][n] = cal0(n-1);
    return board[1][n];
}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 2; i ++) {
        fill_n(board[i], 92, -1);
    }

    cin >> N;
    board[0][1] = 0;
    board[1][1] = 1;
    cout << cal0(N) + cal1(N) <<"\n";
    

    return 0;
}