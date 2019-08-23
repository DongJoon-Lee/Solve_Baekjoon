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

// int n,tok;
// int board[100002];
// int ret[100002];
// int push, pop;
// vector <char> v;

// int main (void) {
//     fill_n(board, 100002, 0);
//     fill_n(ret, 100002, 0);
//     cin >> n;
//     for(int i = n; 0< i; i --) {
//         cin >> board[i];
//     }
//     push = 1;
//     pop = n;
//     for(int i = 1; i <= n; i ++) {
//         ret[push] = i;
//         tok=0;
//         v.pb('+');
//         while(ret[push] == board[push]|| ret[push] == board[pop]) {
//             tok=1;
//             if (ret[push] == board[push]) {
//                 push ++;
//             }
//             else {
//                 ret[pop] = ret[push];
//                 pop--;
//                 push--;
//                 v.pb('-');
//             }
//         }
//         if(tok==0) {
//             push++;
//         }
        
//     }
//     while(pop--) {
//         v.pb('-');
//     }
//     int printans=1;
//     for(int i = 1;i <= n; i ++) {
//         if (ret[i] != board[i]) {
//             printans = 0;
//             break;
//         }
//     }
//     if (printans) {
//         for(int i = 0;i < v.size(); i ++) {
//             cout << v[i] <<"\n";
//         }
//     }
//     else {
//         cout << "NO\n";
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
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int n;
int board[100002];
int ret[100002];
int push, pop;
vector <char> v;

int main (void) {
    fill_n(board, 100002, 0);
    fill_n(ret, 100002, 0);
    cin >> n;
    for(int i = n; 0< i; i --) {
        cin >> board[i];
    }
    push = 1;
    pop = n;
    for(int i = 1; i <= n; i ++) {
        ret[push] = i;
        v.pb('+');
        while(ret[push] == board[pop]) {
            if(pop == 0) {
                break;
            }
            ret[pop] = ret[push];
            pop--;
            push--;
            v.pb('-');
        }
        push++;
        
    }
    // while(pop--) {
    //     v.pb('-');
    // }
    int printans=1;
    for(int i = 1;i <= n; i ++) {
        if (ret[i] != board[i]) {
            printans = 0;
            break;
        }
    }
    if (printans) {
        for(int i = 0;i < v.size(); i ++) {
            cout << v[i] <<"\n";
        }
    }
    else {
        cout << "NO\n";
    }
    return 0;
}