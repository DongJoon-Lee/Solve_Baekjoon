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

// int N, tok;
// int board[1000002];

// // 스택으로 어떻게 접근해야되지?
// // 스택으로 했었는데 시간초과가 나왔다 뭐지
// // 이것도 시간 초과 나오네 ㅜㅠ

// int main (void) {
//     fill_n(board, 1000002, MAX);

//     cin >> N;
//     for(int i = 0; i < N; i ++) {
//         cin >> board[i];
//     }
//     for(int i = 0; i < N; i ++) {
//         tok = 1;
//         for(int j = i+1; j < N; j ++) {
//             if (board[i] < board[j]) {
//                 cout << board[j]<<" " ;
//                 tok = 0;
//                 break;
//             }
//         }
//         if (tok) {
//             cout << -1 << " " ;
//         }
//     }
// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <stack>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, save, tmp;
// stack <int> s;
// stack <int> ret;
// int main (void) {
//     cin >> N;
//     for(int i = 0;i < N;i ++) {
//         cin >> save;
//         s.push(save);
//     }
//     save = 0;
//     while(!s.empty()) {
//         tmp=0;
//         if (save < s.top()) {
//             save = s.top();
//             ret.push(-1);
//             s.pop();
//         }
//         else {
//             if (s.top() == save) {
//                 ret.push(-1);
//                 s.pop();
//                 continue;
//             }
//             ret.push(save);

//             tmp = s.top();
//             s.pop();
//             if (s.empty()) {
//                 break;
//             }
//             else {
//                 if (s.top() < tmp) {
//                     save = tmp;
//                 }
//             }
//         }
//     }
//     while(!ret.empty()) {
//         cout << ret.top() << " ";
//         ret.pop();
//     }
//     // cout << "\n";
//     return 0;
// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <stack>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// // 위 풀이에서 반례 6 2 5 7

// int N, tmp;
// int board[1000002];
// vector <int> v;
// stack <int> s;
// stack <int> ret;
// int main (void) {
//     fill_n(board, 1000002, 0);

//     cin >> N;
//     for(int i = 0; i < N; i ++) {
//         cin >> tmp;
//         s.push(tmp);
//     }
//     while(!s.empty()) {
//         sort(v.begin(), v.end());
//         if (v.size() == 0) {
//             ret.push(-1);
//             v.pb(s.top());
//             s.pop();
//         }
//         else {
//             int tmp = s.top();
//             for(int i = 0;i < v.size(); i ++) {
//                 if (s.top()<v[i]) {
//                     ret.push(v[i]);
//                     v.pb(s.top());
//                     s.pop();
//                     break;
//                 }
//             }
//             if (!s.empty() && tmp == s.top()) {
//                 ret.push(-1);
//                 v.pb(s.top());
//                 s.pop();
//             }
//         }
//     }
//     while(!ret.empty()) {
//         cout << ret.top() << " ";
//         ret.pop();
//     }
// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <stack>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, tmp, tok = 0;;
// int board[1000002];
// stack <int> s, s1, s2, ret;

// int main (void) {
//     cin >> N;
//     for(int i = 0; i < N; i ++) {
//         cin >> tmp;
//         s.push(tmp);
//     }
//     while(!s.empty()) {
//         s2 = s1;
//         if (s2.empty()) {
//             ret.push(-1);
//             s1.push(s.top());
//             s.pop();
//         }
//         else {
//             tok = 0;
//             while(!s2.empty()) {
//                 if (s2.top() <s.top()) {
//                     s2.pop();
//                 }
//                 else if (s.top() < s2.top()) {
//                     ret.push(s2.top());
//                     s1.push(s.top());
//                     s.pop();
//                     tok = 1;
//                     break;
//                 }
//                 else {
//                     ret.push(-1);
//                     s.pop();
//                     tok = 1;
//                     break;
//                 }
                
//             }
//             if(!tok) {
//                 ret.push(-1);
//                 s.pop();
//             }
//         }
//     }
//     while(!ret.empty()) {
//         cout << ret.top()<< " ";
//         ret.pop();
//     }

// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <stack>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, tmp;
// int board[1000002];
// int board2[1000002];
// stack <int> s;


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> N;
//     for(int i = 0; i < N; i ++) {
//         cin >> board[i];
//     }
//     for(int i = 0; i < N; i ++) {
//         if (i == 0) {
//             s.push(board[i]);
//             tmp=0;
//         }
//         else {
//             while(!s.empty() && s.top() < board[i]) {
//                 board2[tmp] = board[i];
//                 s.pop();
//                 while(board2[tmp]!=0) {
//                     tmp--;
//                 }
//             }
//             s.push(board[i]);
//             tmp=i;
//         }
//     }
//     for(int i = 0; i < N; i ++) {
//         if (board2[i] == 0) {
//             board2[i] = -1;
//         }
//         cout << board2[i] << " ";
//     }

    
// }

// 아 너무 어렵다.
// 나중에 다시 봐야 할 것 같다.

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stack>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, tmp;
stack <pair<int, int>> s;
int board[1000002];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    fill_n(board, 1000002, -1);


    cin >> N;
    for(int i = 0;i < N; i ++) {
        cin >> tmp;
        if (s.size() == 0) {
            s.push(mp(tmp, i));
        }
        else {
            while(s.top().first < tmp) {
                board[s.top().second] = tmp;
                s.pop();
                if (s.empty()) {
                    break;
                }
            }
            s.push(mp(tmp,i));
        }
    }
    for(int i = 0; i < N; i ++) {
        
        cout << board[i] << " ";
    }
}