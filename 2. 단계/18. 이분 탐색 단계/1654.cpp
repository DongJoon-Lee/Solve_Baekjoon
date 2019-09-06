// # include <string>
// # include <iostream>
// # include <algorithm>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// ll K, N, len, mi=MIN, num, ret=0;
// ll board[10004];

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> K >> N;
//     for(int i = 0;i < K; i ++){
//         cin >> len;
//         board[i] = len;
//         mi = max(mi, len);
//     }

//     ll lens = 0, lene = mi;
//     while(lene >= lens) {
//         num=0;
//         ll mid = (lens + lene)/2;
//         for(int i = 0; i < K;i ++) {
//             num += board[i]/mid;
//         }
//         if (N <= num) {
//             if (ret < mid) {
//                 ret = mid;
//             }
//             lens = mid + 1;
//         }
//         else {
//             lene = mid-1;
//         }
//     } 
//     cout << ret<<"\n";
//     return 0;
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

ll K, N, mi=0, num, ret=0;
ll board[10004];

int main (void) {

    scanf("%lld %lld", &K, &N);
    for(int i = 0;i < K; i ++){
        scanf("%lld", &board[i]);
        mi = max(mi, board[i]);
    }

    ll lens = 0, lene = MAX;
    while(lene >= lens) {
        num=0;
        ll mid = (lens + lene)/2;
        for(int i = 0; i < K;i ++) {
            num += board[i]/mid;
        }
        if (N <= num) {
            if (ret < mid) {
                ret = mid;
            }
            lens = mid + 1;
        }
        else {
            lene = mid-1;
        }
    } 
    printf("%lld\n", ret);
    return 0;
}