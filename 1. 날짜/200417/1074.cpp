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

// int r, c, x, y;
// ll to = 0, N;


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     cin >> N >> r >> c;
//     // int board[10][10];
//     x = r;
//     y = c;
//     if (r%2 != 0) {
//         x = r--;
//     }
//     if (c%2 != 0) {
//         y = c--;
//     }
//     // cout << "x : " << x << "\ny : " << y << "\nr : " << r << "\nc : " << c<<"\n";
//     N = pow(2, N)/2;
//     for(int i = 0; i < r/2; i ++) {
//         to += 4*N;
//     }
//     cout << to<<"\n";
//     // cout << c<<"\n";
//     for(int i = 0; i < c/2; i ++) {
//         to += 4;
//     }
//     cout << to<<"\n";
//     if (r != x) {
//         to += 2;
//     }
//     cout << to<<"\n";
//     if (c != y) {
//         to ++;
//     }
//     // cout << to<<"\n";
//     cout << to <<"\n";



//     return 0;
// }

// 문제를 완전 장못 파악함

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

int N, r, c;
vector <int> v(16);
ll ans =0;

ll cal(int start1, int start2, int n) {
    if (n == 1) {
        return start1 + start2;
    }
    // cout << start1 + pow(2, n-1) <<"\n";
    if (r < start1 + pow(2, n-1)) { // 1 or 2
        // cout << start2 + pow(2, n-1) << "\n";
        if (c < start2 + pow(2, n-1)) { // 1
            v[N-n+1] = 1;
            return cal(start1, start2, n-1);
        }
        else { // 2
            v[N-n+1] = 2;
            return cal(start1, start2 + pow(2, n-1), n-1);
        }
    } 
    else { // 3 or 4
        if (c < start2 + pow(2, n-1)) {
            v[N-n+1] = 3;
            return cal(start1 + pow(2, n-1), start2, n-1);
        }
        else {
            v[N-n+1] = 4;
            return cal(start1 + pow(2, n-1), start2 + pow(2, n-1), n-1);
        }
    }

}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> r >> c;
    ll abc = cal(0, 0, N);
    // for(int i = 1; i <= N; i ++) {
    //     cout << v[i] <<"\n";

    // }
    // 처음에 4^(N-1)*(v[i]-1) 하면 되고
    // 다음은 
    for(int i = 1; i < N; i ++) {
        ans += pow(4, N-i)*(v[i]-1);
        // cout << ans <<"\n";
    }
    // cout << ans <<"\n";
    if (r % 2 != 0) {
        ans += 2;
    }
    if (c % 2 != 0) {
        ans ++;
    }
    cout << ans <<"\n";



    return 0;
}