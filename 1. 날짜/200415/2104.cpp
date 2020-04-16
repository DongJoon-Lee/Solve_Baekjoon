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
// int board[100002];

// int cal(int start, int end) {
//     if (start == end) {
//         return board[start]*board[start];
//     }
//     else {
//         int mid = (start+end)/2;
//         int ma = max(cal(start, mid), cal(mid, end));
//         int p = mid, q = mid;
//         int mi = MAX, ma2 = MIN, mi3 = MAX;
        
//         while(p > start && end > q) {
//             int sum=0, sum2 = 0;
//             for(int i = p-1; i <= mid; i ++) {
//                 sum += board[i];
//                 mi = min(mi, board[i]);
//             }
//             for(int i = mid; i <= q+1; i ++) {
//                 sum2 += board[i];
//                 mi3 = min(mi3, board[i]);
//             }
//             if (sum*mi >= sum2*mi3) {
//                 p--;
//                 ma = max(ma, sum*mi);
//             }
//             else {
//                 q++;
//                 ma = max(ma, mi3*sum2);
//             }
//         }
//         return ma;
//     }
// }


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     for(int i = 1; i <= N; i ++) {
//         cin >> board[i];
//     }
//     cout << cal(1, N) <<"\n";

//     return 0;
// }

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
// int board[100002];

// ll cal(int start, int end) {
//     // cout << "start  " << start << "   end   " << end <<"\n";
//     if (start == end) {
//         return (ll)board[start]*board[start];
//     }
//     else if (start +1 == end) {
//         // cout << max(board[end]*board[end], max(board[start]*board[start], (board[start] + board[end])*min(board[start], board[end]))) <<"\n";
//         ll abc = (ll)board[start]*board[start] > (ll)((board[start] + board[end])*min(board[start], board[end])) ? (ll)board[start]*board[start]: (ll)((board[start] + board[end])*min(board[start], board[end]));
//         return (ll)(board[end]*board[end]) > abc ? (ll)(board[end]*board[end]): abc;
//     }
//     int mid = (start+end)/2;
//     ll res = (ll)cal(start, mid) > (ll)cal(mid, end) ? (ll)cal(start, mid) : cal(mid, end);
    

//     int left = mid, right = mid, minVal = board[mid];
//     ll sum = board[mid];
//     // cout << "여기  " << start << "   " << end << "     " << left << "    " << right << "   " << "res    " << res <<"\n";
//     while(start <= left && right <= end) {
//         if ()
//         if ((minVal < board[left-1]? minVal*(sum+board[left-1]) : board[left-1]*(sum+board[left-1])) >= (minVal < board[right+1]? minVal*(sum+board[right+1]): board[right+1]*(sum+board[right+1]))) {
//             //min(minVal, board[left-1])*(sum+board[left-1]) >= min(minVal, board[right+1])*(sum+board[right+1])) {
//             left --;
//             minVal = min(minVal, board[left]);
//             sum += board[left];
//         }
//         else {
//             // cout << "here\n";
//             right++;
//             minVal = min(minVal, board[right]);
//             sum += board[right];
//         }
//         res = (ll)(res > minVal*sum ? res: minVal*sum);
//         // cout << left << "    " << right << "   " << "res    " << res <<"\n";
//     }
    
//     return (ll)res;
// }

// int main (void) {
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);

//     cin >> N;
//     fill_n(board, 100002, -1);
//     for(int i = 1;i <= N; i ++) {
//         cin >> board[i];
//     }
//     // printf("%lld\n",(ll)999999*999999);
//     printf("%lld\n", cal(1, N));

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

int N;
int board[100002];

ll cal(int start, int end) {
    // cout << "start  " << start << "   end   " << end <<"\n";
    if (start == end) {
        return (ll)board[start]*board[start];
    }
    else if (start +1 == end) {
        // cout << max(board[end]*board[end], max(board[start]*board[start], (board[start] + board[end])*min(board[start], board[end]))) <<"\n";
        ll abc = (ll)board[start]*board[start] > (ll)((board[start] + board[end])*min(board[start], board[end])) ? (ll)board[start]*board[start]: (ll)((board[start] + board[end])*min(board[start], board[end]));
        return (ll)(board[end]*board[end]) > abc ? (ll)(board[end]*board[end]): abc;
    }
    int mid = (start+end)/2;
    ll res = (ll)cal(start, mid) > (ll)cal(mid, end) ? (ll)cal(start, mid) : cal(mid, end);
    

    int left = mid, right = mid, minVal = board[mid];
    ll sum = board[mid];
    // cout << "여기  " << start << "   " << end << "     " << left << "    " << right << "   " << "res    " << res <<"\n";
    while(right - left < end - start) {
        int a = left > start? min(minVal, board[left-1]):-1;
        int b = end > right? min(minVal, board[right+1]):-1;
        if (a <= b) {
            minVal = b;
            right ++;
            sum += board[right];
        }
        else {
            minVal = a;
            left --;
            sum += board[left];
        }
        res = res > sum*minVal? res: sum*minVal;
    }
    // while(start <= left && right <= end) {
    //     if ()
    //     if ((minVal < board[left-1]? minVal*(sum+board[left-1]) : board[left-1]*(sum+board[left-1])) >= (minVal < board[right+1]? minVal*(sum+board[right+1]): board[right+1]*(sum+board[right+1]))) {
    //         //min(minVal, board[left-1])*(sum+board[left-1]) >= min(minVal, board[right+1])*(sum+board[right+1])) {
    //         left --;
    //         minVal = min(minVal, board[left]);
    //         sum += board[left];
    //     }
    //     else {
    //         // cout << "here\n";
    //         right++;
    //         minVal = min(minVal, board[right]);
    //         sum += board[right];
    //     }
    //     res = (ll)(res > minVal*sum ? res: minVal*sum);
    //     // cout << left << "    " << right << "   " << "res    " << res <<"\n";
    // }
    
    return (ll)res;
}

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    cin >> N;
    fill_n(board, 100002, -1);
    for(int i = 1;i <= N; i ++) {
        cin >> board[i];
    }
    // printf("%lld\n",(ll)999999*999999);
    printf("%lld\n", cal(1, N));

    return 0;
}