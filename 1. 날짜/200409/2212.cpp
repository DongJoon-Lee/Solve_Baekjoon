// 인생... 머리가 굳어버린 것 같다,,

// // # include <string>
// // # include <iostream>
// // # include <vector>
// // # include <queue>
// // # include <stdio.h>
// // # include <algorithm>
// // # include <ctype.h>
// // # include <cstdlib>
// // #include <queue>
// // # include <cmath>
// // using namespace std;
// // typedef long long ll;
// // # define pb push_back
// // # define mp make_pair

// // const int MAX = 2147483647;
// // const int MIN = -2147483648;

// // int N, K, tmp, cou = 0, tmp2, ma = MIN, tmp3, ans = 0, keep=0;
// // priority_queue <int, vector <int>, greater<int> > pq;

// // int main (void) {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);

// //     cin >> N >> K;
// //     for(int i = 0; i < N; i ++) {
// //         cin >> tmp;
// //         pq.push(tmp);
// //         if (ma <= tmp) {
// //             ma = tmp;
// //         }
// //     }
// //     tmp2 = round((ma - pq.top())/(K*1.0));
// //     cout << pq.top() << " " << ma << "\n";
// //     tmp3 = pq.top();
// //     pq.pop();
// //     while(!pq.empty()) {
// //         cout <<"\ncou   " << cou << "\ntmp3    " << tmp3 << "\nkeep   " << keep << "\npq.top()   " << pq.top() <<"\n";
// //         if (pq.size() == K - cou) {
// //             break;
// //         }
// //         else if (tmp3 + tmp2 >= pq.top()) {
// //             keep += pq.top() - tmp3; // 수정
// //             cout << pq.top() << " " << tmp3 << "    " << keep <<"\n";
// //             pq.pop();
            
// //         }
// //         else {
// //             tmp3 = pq.top();
// //             pq.pop();
// //             cou ++;

// //         }
        
// //     }
// //     cout << keep <<"\n";


// //     return 0;
// // }


// // // 1 3 6 7 9
// // // 1 - 3
// // // 6 9 

// // // 앞 - 뒤 / 개수
// // // 1 3 6 7 9
// // // 8/2 = 4
// // // 1 to 5
// // // 5 to 9

// // // 1 3 6 7 9
// // // 8/3 = 2.666
// // // 1 to 4
// // // 4 to 7
// // // 7 to 9

// // // 1 3 6 7 9
// // // 2
// // // 8/4 = 2
// // // 1 to 3
// // // 3 to 5
// // // 5 to 7
// // // 7 to 9

// // // 한 번 해볼까?

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

// int N, K, ans = 0, tmp;
// int board[10002];
// int siz[10002];


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     fill_n(board, 10002, 0);
//     fill_n(siz, 10002, 0);

//     cin >> N >> K;
//     for(int i = 0; i < N; i ++) {
//         cin >> board[i];
//     }
//     sort(board, board + N);
//     for(int i = 1; i < N; i ++) {
//         siz[i-1] = board[i] - board[i-1];
//         ans += siz[i-1];
//     }
//     sort(siz, siz+N-1);
//     for(int i = 0; i < K-1; i ++) {
//         ans -= siz[N-2-i];
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
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, K, ans = 0;
vector <int> dir(10005), siz(10005);


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for(int i = 0; i < N; i ++) {
        cin >> dir[i];
    }
    if ( K >= N) {
        cout << 0 <<"\n";
    }
    else {
        sort(dir.begin(), dir.begin() + N);
        for(int i = 1; i < N; i ++) {
            siz[i-1] = dir[i] - dir[i-1];
            ans += siz[i-1];
        }
        sort(siz.begin(), siz.begin() + N-1);
        for(int i = 0; i < K-1; i ++) {
            ans -= siz[N-1-1-i];
        }
        cout << ans <<"\n";
    }
    
    return 0;
}