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

// ll N, C, st = 1, en = 0, ans = 0,tmpans=0;;
// vector <ll> v(200002);

// int cal(ll m) {
//     int cou = 1;
//     ll tmp = v[0];
    
//     for(int i = 1; i < N; i ++) {
//         cout << tmp <<"\n";
//         if (v[i] - tmp > m) {
//             cou ++;
//             tmpans = max(tmpans, v[i] - tmp);
//             tmp = v[i];
//         }
//     }
//     if (cou <= C) {
//         if (cou == C) {
//             ans = max(ans, tmpans);
//         }
//         return 1;
//     }
//     return 0;
// }


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N >> C;
//     for(int i = 0; i < N; i ++) {
//         cin >> v[i];
//         en += v[i];
//     }
//     ll mid;
//     sort(v.begin(), v.begin() + N);
//     // for(int i = 0; i < N;i  ++) {
//     //     cout << v[i]<<"\n";
//     // }
    
//     while(st <= en) {
//         mid = (st + en)/2;
//         cout << st <<"   " << en<<"\n";
//         if (cal(mid)) {
//             en = mid - 1;
//         }
//         else {
            
//             st = mid + 1;
//         }
//     }
//     cout << ans <<"\n";
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
# include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

ll N, C, st, en=0;
ll board[200002], ans;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> C;
    for(int i = 0; i < N; i ++) {
        cin >> board[i];
        en += board[i];
    }
    sort(board, board + N);
    st = 1;
    ll tmp = board[0];
    int cou = 0;
    while(st <= en) {
        cou = 1;
        ll mid = (st+en)/2;
        tmp = board[0];
        for(int i = 1; i < N; i ++) {
            if (board[i] - tmp >= mid) {
                cou ++;
                tmp = board[i];
            }
        }
        if (cou >= C) {
            st = mid + 1;
            ans = mid;
        }
        else {
            en = mid -1;
        }
    }
    cout << ans <<"\n";



    return 0;
}