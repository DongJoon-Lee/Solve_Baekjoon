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

// //대문자 - -64
// // 65 ~ 98
// // 97 ~ 122
// //소문자 - -70
// //스페이스바 32
// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N;
// int board[100001];
// char board2[100001];
// int tok = 0;

// int main (void) {
//     scanf("%d\n", &N);
//     for(int i = 0; i < N; i ++) {
//         scanf("%d\n", &board[i]);
//     }
//     scanf("%[^\n]", board2);
//     // for(int i = 0; i < N; i ++) {
//     //     cout << board2[i] << " " << (int)board2[i];
//     // }
//     for(int i = 0; i < N; i ++) {
//         tok = 0;
//         for(int j = 0; j < N; j ++) {
//             if((int)board2[i] == 32) {
//                 if (board[j] == 0) {
//                     board[j] = 99999;
//                     tok = 1;
//                     break;
//                 }
//             }
//             else {
//                 if (65 <= (int)board2[i] &&(int)board2[i] <= 90) {
//                     if (board[j] == (int)board2[i]-64) {
//                         tok = 1;
//                         board[j] = 99999;
//                         break;
//                     }
//                 }
//                 else if (97 <= (int)board2[i] && (int)board2[i] <= 122) {
//                     if (board[j] == (int)board2[i]-70) {
//                         tok = 1;
//                         board[j] = 99999;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (!tok) {
//             break;
//         }
//     }
//     if (!tok) {
//         cout << "n\n";
//     }
//     else {
//         cout << "y\n";
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

// //대문자 - -64
// // 65 ~ 90
// // 97 ~ 122
// //소문자 - -70
// //스페이스바 32


const int MAX = 2147483647;
const int MIN = -2147483648;
int N;
int tmp, sav;
queue <int> q;
char board[100001];
vector <char> b1;
vector <int> b2;
char tok = 'y';

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        scanf("%d\n", &tmp);
        // q.push(tmp);
        b2.pb(tmp);
    }
    scanf("%[^\n]", board);
    for(int i = 0; i < N; i ++) {
        b1.pb(board[i]);
    }
    sort(b1.begin(), b1.end());
    sort(b2.begin(), b2.end());
    // for(int i = 0; i < N; i++) {
    //     cout << b1[i] << " ";
    // }
    // cout << "\n";
    // for(int i = 0; i < N; i++) {
    //     cout << b2[i] << " ";
    // }
    // cout << "\n";
    for(int i = 0; i < N;i ++) {
        if ((int)b1[i] == 32) {
            if ((int)b1[i] - 32 == b2[i]) {
                continue;
            }
            else {
                tok = 'n';
                break;
            }
        }
        else {
            if (65 <= (int)b1[i] && (int)b1[i] <= 90) {
                if ((int)b1[i]-64 == b2[i]) {
                    continue;
                }
                else {
                    tok = 'n';
                    break;
                }
            }
            else if (97 <= (int)b1[i] && b1[i] <= 122) {
                if((int)b1[i]-70 == b2[i]) {
                    continue;
                }
                else {
                    tok= 'n';
                    break;
                }
            }
        }
    }
    cout << tok << "\n";

}