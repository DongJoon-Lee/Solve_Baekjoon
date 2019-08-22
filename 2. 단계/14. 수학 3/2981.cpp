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

// int N;
// int board[102];

// int findGcd(int, int);

// int main (void) {
//     fill_n(board, 102, 0);
//     cin >> N;
//     for(int i = 0; i < N; i ++) {
//         cin >> board[i];
//     }
//     for(int i = 2; i < 39; i ++) {
//         cout << "i = " << i << "  " << board[0]%i << " " << board[1]%i << " "  << board[2]%i << "\n";
//     }
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

int N, gcd;
int board[102];
vector <int> v;
int findGcd(int, int);

int main (void) {
    fill_n(board, 102, 0);
    gcd = 0;
    cin >> N;
    for(int i = 0;i < N; i ++) {
        cin >> board[i];
    }
    sort(board, board+N);
    gcd = board[1]-board[0];
    for(int i = 2; i < N; i ++) {
        gcd = findGcd(gcd, board[i]-board[i-1]);
    }
    // for(int i = 2; i <= gcd; i ++) {
    //     if (gcd%i == 0) {
    //         v.pb(i);
    //     }
    // }
    for(int i = 1; i*i <= gcd; i ++) {
        if (gcd%i == 0) {
            v.pb(i);
            if (i*i < gcd) {
                v.pb(gcd/i);
            }
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i ++) {
        if (v[i] == 1) {
            continue;
        }
        cout << v[i] <<" " ;
    }
    cout << "\n";
    return 0;
}

int findGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGcd(b, a%b);
}