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


// int N, M, tok=0, idxs, idxe;
// vector <pair<int,int>> v;

// int cal(int);

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     for(int i = 0; i < N; i++) {
//         cin >> M;
//         tok = 0;
//         for(int j = 0; j < v.size(); j ++) {
//             if (v[j].first == M) {
//                 v[j].second++;
//                 tok= 1;
//                 break;
//             }
//         }
//         if(!tok) {
//             v.pb(mp(M,1));
//         }
//     }
//     sort(v.begin(), v.end());
//     cin >> M;
//     for(int i = 0; i < M; i ++) {
//         idxs = 0, idxe = v.size()-1;
//         cin >> N;
//         cout << cal(N)<<" ";
//     }
//     cout << "\n";
//     return 0;
// }

// int cal(int n) {
//     if (idxe <= idxs || n < v[idxs].first || v[idxe].first < n) {
//         return 0;
//     }
//     else {
//         if (v[idxs].first == n) {
//             return v[idxs].second;
//         }
//         else if (v[idxe].first == n) {
//             return v[idxe].second;
//         }
//         int mid = (idxs+idxe)/2;
//         if (v[mid].first == n) {
//             return v[mid].second;
//         }
//         else {
//             if (v[mid].first < n) {
//                 idxs = mid + 1;
//             }
//             else {
//                 idxe = mid - 1;
//             }
//             return cal(n);
//         }
//     }
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

int N, M;
int board[20000002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fill_n(board, 20000002,0);
    cin >> N;
    for(int i = 0;i < N; i ++) {
        cin >> M;
        if (M <0) {
            board[10000000-M]++;
        }
        else {
            board[M]++;
        }
    }
    cin >> M;
    for(int i = 0; i < M; i ++) {
        cin >> N;
        if(N<0) {
            cout<<board[10000000-N];
        }
        else {
            cout << board[N];
        }
        cout<<" ";
    }
    cout<<"\n";
    return 0;
}