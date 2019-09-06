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

// ll N, E, tmp, ans = 0;
// ll board[100000];

// void chk(ll);
// void chk2(ll);

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     fill_n(board, 100000, -1);
//     cin >> N;
//     for(ll i = 1; i <= N; i ++) {
//         cin >> tmp;
//         if (tmp == -1) {
//             board[1]=1;
//         }
//         else {
//             tmp++;
//             if (board[2*tmp] == -1) {
//                 board[2*tmp] = 1;
//             }
//             else {
//                 board[2*tmp+1] = 1;
//             }
//         }
//     }
//     cin >> E;
//     E ++;
//     chk(E);
//     chk2(1);
//     cout << ans <<"\n";

// }

// void chk(int a) {
//     if (board[a] == 1) {
//         board[a] = -1;
//         chk(2*a);
//         chk(2*a+1);
//     }
// }

// void chk2(int b) {
//     if (board[b] == 1 && board[2*b] == -1 && board[2*b+1] == -1) {
//         ans +=1;
//     }
//     else {
//         if (board[2*b] == 1) {
//             chk2(2*b);
//         }
//         if (board[2*b+1] == 1) {
//             chk2(2*b+1);
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

int N,E, leaf = 0, tmp, root;
vector <int> v[52];
bool chk[52];

void cal(int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> tmp;
        if (tmp == -1) {
            root = i;
        }
        else {
            v[tmp].pb(i);
            v[i].pb(tmp);
        }
    }
    cin >> E;
    chk[E]=true;
    if (!chk[root]) {
        cal(root);
    }
    
    cout << leaf<<"\n";

    return 0;
}

void cal(int a) {
    chk[a] = true;
    queue <int> q;
    q.push(a);
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        int count = 0;
        for(int i = 0;i < v[node].size();i ++) {
            if (!chk[v[node][i]]) {
                count ++;
                chk[v[node][i]] = true;
                q.push(v[node][i]);
            }
        }
        if (count == 0) {
            leaf ++;
        }
    }
}