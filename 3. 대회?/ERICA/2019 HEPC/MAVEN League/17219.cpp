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

// int N, M;
// string tmp1,tmp2;
// vector<pair<string,string>> v[70];

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N >> M;
//     for(int i = 0; i < N; i++) {
//         cin >> tmp1 >> tmp2;
//         if (tmp1.at(0)<= 90) {
//             v[tmp1.at(0)-64].pb(mp(tmp1,tmp2));
//         }
//         else {
//             v[tmp1.at(0)-96+30].pb(mp(tmp1,tmp2));
//         }
//     }
//     for(int i = 0; i < M; i ++) {
//         cin >> tmp1;
//        if (tmp1.at(0)<= 90) {
//            for(int j= 0;j < v[tmp1.at(0)-64].size(); j ++) {
//                cout << v[tmp1.at(0)-64][j].second<<"\n";
//                break;
//            }
//        }
//        else {
//            for(int j= 0;j < v[tmp1.at(0)-96+30].size(); j ++) {
//                cout << v[tmp1.at(0)-96+30][j].second<<"\n";
//                break;
//            }
//        }
//     }
//     return 0;
// }

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

// string board1[100002][2];/*1-26 27 - 52*/
// string board2[100002][2];/*1-26 27 - 52*/
// string board3[100002][2];/*1-26 27 - 52*/
// int board1to=0,board2to=0,board3to=0;
// int N, M;
// string tmp1, tmp2;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N >> M;
//     for(int i = 0; i < N; i ++) {
//         cin >> tmp1 >> tmp2;
//         if (tmp1.at(0) <= 90) {
//             board1[board1to][0] = tmp1;
//             board1[board1to][1] = tmp2;
//             board1to++;
//         }
//         else if (tmp1.at(0) <= 122) {
//             board2[board2to][0] = tmp1;
//             board2[board2to][1] = tmp2;
//             board2to++;
//         }
//         else {
//             board2[board3to][0] = tmp1;
//             board2[board3to][1] = tmp2;
//             board3to++;
//         }
//     }
//     for(int j = 0; j < M; j ++) {
//         cin >> tmp1;
//         if (tmp1.at(0) <= 90) {
//             for(int i = 0; i < board1to; i ++) {
//                 if (tmp1 == board1[i][0]) {
//                     cout << board1[i][1]<<"\n";
//                     break;
//                 }
//             }
//         }
//         else {
//             for(int i = 0; i < board2to; i ++) {
//                 if (tmp1 == board2[i][0]) {
//                     cout << board2[i][1]<<"\n";
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <map>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, M;
string tmp1, tmp2;
map<string,string> m;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 0; i < N; i ++) {
        cin >> tmp1 >> tmp2;
        m.insert(mp(tmp1,tmp2));
    }
    for(int i = 0; i < M; i++) {
        cin >> tmp1;
        cout << m.find(tmp1)->second<<"\n";
    }
    return 0;

    
}