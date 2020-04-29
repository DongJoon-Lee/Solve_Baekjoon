// // // // // # include <string>
// // // // // # include <iostream>
// // // // // # include <vector>
// // // // // # include <queue>
// // // // // # include <stdio.h>
// // // // // # include <algorithm>
// // // // // # include <ctype.h>
// // // // // # include <cstdlib>
// // // // // # include <queue>
// // // // // # include <cmath>
// // // // // using namespace std;
// // // // // typedef long long ll;
// // // // // # define pb push_back
// // // // // # define mp make_pair

// // // // // const int MAX = 2147483647;
// // // // // const int MIN = -2147483648;

// // // // // int N, M;
// // // // // ll board[100002], sum[100002];
// // // // // int cou;
// // // // // int ans = MAX;


// // // // // int main (void) {
// // // // //     ios_base::sync_with_stdio(0);
// // // // //     cin.tie(0);

// // // // //     fill_n(board, 100002, -1);
// // // // //     fill_n(sum, 100002, 0);
// // // // //     cin >> N >> M;
// // // // //     for(int i = 1; i <= N; i ++) {
// // // // //         cin >> board[i];
// // // // //         // sum[i] = sum[i-1] + board[i];
// // // // //     }
// // // // //     for(int i = 1; i <= N; i ++) {
// // // // //         // cout << board[i] << "  " << sum[i] <<"\n";
// // // // //     }
// // // // //     ll s = 1, e = 1000000000;
// // // // //     int tok = 0;
// // // // //     ll mid = 0;
// // // // //     while(s + 1 < e) {
// // // // //         if (!tok) {
// // // // //             mid = (s + e)/2;
// // // // //         }
// // // // //         else {
// // // // //             mid -= 1;
// // // // //         }
// // // // //         // cout <<s << "  " << e << "  mid : " << mid <<"\n";
// // // // //         ll tmp = 0;
// // // // //         cou = 0;
// // // // //         for(int i = 1; i <= N; i ++) {
// // // // //             if (board[i] > mid) {
// // // // //                 cou = MAX-2;
// // // // //                 break;
// // // // //             }
// // // // //             tmp += board[i];
// // // // //             // cout << "tmp  " << tmp <<"\n";
// // // // //             if (tmp == mid) {
// // // // //                 cou ++;
// // // // //                 tmp = 0;
// // // // //             }
// // // // //             else if (tmp > mid) {
// // // // //                 cou ++;
// // // // //                 tmp = 0;
// // // // //                 i--;
// // // // //             }
// // // // //         }
// // // // //         // cout << "cou  " << cou <<"\n";
// // // // //         cou++;
// // // // //         if (cou == M) {
// // // // //             ans = min(ans, (int)mid);
// // // // //             tok = 1;
// // // // //         }
// // // // //         else if (cou > M) {
// // // // //             if (tok) {
// // // // //                 mid++;
// // // // //                 break;
// // // // //             }
// // // // //             s = mid;
// // // // //         }
// // // // //         else {
// // // // //             if (tok) {
// // // // //                 mid++;
// // // // //                 break;
// // // // //             }
// // // // //             e = mid;
// // // // //         }
// // // // //     }
// // // // //     // cout << cou<<"\n";
// // // // //     // cout <<s << "  " << e << "  mid : " << (s+e)/2 <<"\n";
// // // // //     cout << mid <<"\n";

// // // // //     return 0;
// // // // // }

// // // // # include <string>
// // // // # include <iostream>
// // // // # include <vector>
// // // // # include <queue>
// // // // # include <stdio.h>
// // // // # include <algorithm>
// // // // # include <ctype.h>
// // // // # include <cstdlib>
// // // // # include <queue>
// // // // # include <cmath>
// // // // using namespace std;
// // // // typedef long long ll;
// // // // # define pb push_back
// // // // # define mp make_pair

// // // // const int MAX = 2147483647;
// // // // const int MIN = -2147483648;

// // // // int N, M;
// // // // int board[100002];


// // // // int main (void) {
// // // //     ios_base::sync_with_stdio(0);
// // // //     cin.tie(0);

// // // //     fill_n(board, 100002, 0);
// // // //     int base = 0;
// // // //     cin >> N >> M;
// // // //     for(int i = 1;i <= N; i ++) {
// // // //         cin >> board[i];
// // // //         base = board[base] < board[i]? i : base;
// // // //     }
// // // //     ll tmp = 0;
// // // //     int cou = 0;
// // // //     cout << "base : " << base<<"\n";
// // // //     for(int i = 1; i <= N; i ++) {
// // // //         tmp += board[i];
// // // //         if (base < tmp) {
// // // //             i--;
// // // //             tmp = 0;
// // // //             cou ++;
// // // //         }
// // // //     }
// // // //     if (base < tmp) {
// // // //         cou += 2;
// // // //     }
// // // //     else {
// // // //         cou ++;
// // // //     }
// // // //     if (cou == M) {
// // // //         base--;
// // // //     }
// // // //     else if (cou > M) {

// // // //     }


// // // //     return 0;
// // // // }

// // // # include <string>
// // // # include <iostream>
// // // # include <vector>
// // // # include <queue>
// // // # include <stdio.h>
// // // # include <algorithm>
// // // # include <ctype.h>
// // // # include <cstdlib>
// // // # include <queue>
// // // # include <cmath>
// // // using namespace std;
// // // typedef long long ll;
// // // # define pb push_back
// // // # define mp make_pair

// // // const int MAX = 2147483647;
// // // const int MIN = -2147483648;

// // // int N, M, board[100002];
// // // int ans = 0, ma = 0;
// // // int mid;

// // // int cal(int start, int end) {
// // //     // cout << start << "  " << end <<"\n";
// // //     if (start +1 == end) {
// // //         return ans;
// // //     }
// // //     mid = (start + end)/2;
// // //     if (ma > mid) {
// // //         // cout << "¿©±â    " << ma << "   " << mid <<"\n";
// // //         return cal(start+1, end);
// // //     }
// // //     ll tmp = 0;
// // //     int cou = 0;
// // //     for(int i = 1; i < N; i ++) {
// // //         tmp += board[i];
// // //         if (tmp > mid) {
// // //             cou ++;
// // //             tmp = 0;
// // //             i --;
// // //         }
// // //     }
// // //     tmp += board[N];
// // //     if (tmp > mid) {
// // //         cou += 2;
// // //     }
// // //     else {
// // //         cou ++;
// // //     }
    
// // //     if (cou == M) {
// // //         ans = mid;
// // //         return cal(start, mid);
// // //     }
// // //     else if (cou > M) {
// // //         return cal(mid, end);
// // //     }
// // //     else {
// // //         return cal(start, mid);
// // //     }
// // // }


// // // int main (void) {
// // //     ios_base::sync_with_stdio(0);
// // //     cin.tie(0);

// // //     cin >> N >> M;
// // //     fill_n(board, 100002, -1);
// // //     for(int i = 1;i <= N; i ++) {
// // //         cin >> board[i];
// // //         ma = max(ma, board[i]);
// // //     }
// // //     ll realAns = cal(1, 2000000000);
// // //     if (realAns == 0) {
// // //         cout << mid + 1 << "\n";
// // //     }
// // //     else {
// // //         cout << realAns <<"\n";
// // //     }

// // //     return 0;
// // // }

// // # include <string>
// // # include <iostream>
// // # include <vector>
// // # include <queue>
// // # include <stdio.h>
// // # include <algorithm>
// // # include <ctype.h>
// // # include <cstdlib>
// // # include <queue>
// // # include <cmath>
// // using namespace std;
// // typedef long long ll;
// // # define pb push_back
// // # define mp make_pair

// // const int MAX = 2147483647;
// // const int MIN = -2147483648;

// // int N, M;
// // int board[100002];
// // int base = 0;


// // int main (void) {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);

// //     cin >> N >> M;
// //     for(int i = 1; i <= N; i ++) {
// //         cin >> board[i];
// //         if (base < board[i]) {
// //             base = board[i];
// //         }
// //     }
// //     int cou = 0;
// //     int tmp = 0;
// //     int ans = 0;
// //     for(int i = base; i <= 1000000000; i ++) {
// //         for(int j = 1; j <= N;j ++) {
// //             // cout << tmp <<"\n";
// //             tmp += board[j];
// //             if (tmp > i) {
// //                 tmp = board[j];
// //                 cou ++;
// //             }
// //         }
// //         if (tmp > i) {
// //             cou +=2;
// //         }
// //         else {
// //             cou ++;
// //         }
// //         if (cou == M) {
// //             ans = i;
// //             break;
// //         }
// //         cou = 0;
// //         tmp = 0;
// //     }
// //     cout << ans <<"\n";


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
// # include <queue>
// # include <cmath>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, M, board[100002];
// ll mid;
// int ans;

// int cal(int start, int end) {
//     mid = (start + end)/2;
//     // cout << start << "  " << mid << "  " << end <<"\n";
//     if (start == end) {
//         return mid;
//     }
//     int cou = 0;
//     int tmp = 0;
//     for(int i = 1; i <= N; i ++) {
//         if (mid < board[i]) {
//             return cal(start + 1, end);
//         }
//         tmp += board[i];
//         if (tmp > mid) {
//             tmp = board[i];
//             cou ++;
//         }
//     }
//     if (tmp > mid) {
//         cou += 2;   
//     }
//     else {
//         cou ++;
//     }
//     if (start + 1 == end) {
//         return ans;
//     }
//     if (cou == M) {
//         ans = mid;
//         return cal(start, mid);
//     }
//     else if (cou > M) {
//         return cal(mid, end);
//     }
//     else {
//         return cal(start, mid);
//     }
// }


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N >> M;
//     for(int i = 1; i <= N; i ++) {
//         cin >> board[i];
//     }
//     cout << cal(1, 1000000000) <<"\n";


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

int N, M, board[100002];
int start, en=0, mid, ans;

int cal(int m) {
    int tmp = 0;
    int cou = 1;
    for(int i = 1; i <= N; i ++) {
        if (m < board[i]) {
            return 0;
        }
        tmp += board[i];
        if (tmp > mid) {
            cou ++;
            tmp = board[i];
        }
    }
    if (cou <= M) {
        return 1;
    }
    else {
        return 0;
    }

}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1;i <= N; i ++) {
        cin >> board[i];
        en += board[i];
    }
    start = 1;
    while(start <= en) {
        // cout << start << "  " << en <<"\n";
        mid = (start + en)/2;
        if (cal(mid)) {
            ans = mid;
            en = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << ans <<"\n";

    return 0;
}