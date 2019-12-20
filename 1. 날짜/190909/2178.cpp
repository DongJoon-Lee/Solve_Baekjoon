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

// int N, M, ret=0;
// int board[105][105];
// int chk[105][105];
// int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

// int cal(int,int);

// int main (void) {
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);

//     for(int i = 0; i < 105; i++) {
//         fill_n(chk[i], 105, -1);
//     }

//     scanf("%d %d", &N, &M);
//     for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= M; j ++) {
//             scanf("%1d", &board[i][j]);
//         }
//     }

//     printf("%d\n", cal(1,1));
// }

// int cal(int n, int m) {
//     if (n == N && m == M) {
//         return 0;
//     }
//     else {
//         chk[n][m] = 1;
//         int nn, mm;
//         for(int i = 0; i < 4; i ++) {
//             nn = n + dir[i][0];
//             mm = m + dir[i][1];
//             if (1<= nn && nn <= N && 1 <= mm && mm <= M && chk[nn][mm] != 1) {
//                 return 1 + cal(nn, mm);
//             }
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
int board[105][105];
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

void cal(int,int);

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= M; j++) {
            scanf("%1d", &board[i][j]);
        }
    }
    cal(1,1);
    printf("%d\n", board[N][M]-1);
    return 0;
}

void cal(int n, int m) {
    queue <pair<int, int> > q;
    q.push(mp(n,m));
    board[n][m] = 2;
    while(!q.empty()) {
        int n1 = q.front().first, m1 = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i ++) {
            int nn = n1 + dir[i][0];
            int mm = m1 + dir[i][1];
            if (1 <= nn && nn <= N && 1 <= mm && mm <= M && board[nn][mm] == 1) {
                q.push(mp(nn,mm));
                board[nn][mm] = board[n1][m1] + 1;
            }
        }
    }
}