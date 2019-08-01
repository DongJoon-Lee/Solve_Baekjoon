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


// int M, N;
// int board[505][505];
// int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
// int ans = 0;

// void cal(int m, int n) {
//     int mm, nn;
//     for(int i = 0; i < 4; i ++) {
//         mm = m + dir[i][0];
//         nn = n + dir[i][1];
//         if (0 <= mm && mm < M && 0 <= nn && nn < N && board[mm][nn] < board[m][n]) {
//             if (!(mm == M-1 && nn == N-1)) {
//                 cal(mm, nn);
//             }
//             else {
//                 ans ++;
//             }
//         }
//     }
// }


// int main (void) {
//     cin >> M >> N;
//     board[505][505] =  {0,};
//     for(int i = 0; i < M; i ++) {
//         for(int j = 0; j < N; j ++) {
//             cin >> board[i][j];
//         }
//     }
//     cal(0,0);
//     cout << ans << "\n";
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

int M, N;
int board[505][505];
int save[505][505] = {0,};
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
int ans = 0;


// 다이나믹 프로그래밍이니까.. 지나가면서 값을 저장해야되나?!

int cal(int m, int n) {
    if (m == 0 && n == 0) {
        return 1;
    }
    else if (save[m][n] != 0) {
        return save[m][n];
    }
    else {
        int mm, nn;
        for(int i = 0; i < 4; i ++) {
            mm = m + dir[i][0];
            nn = n + dir[i][1];
            if (0 <= mm && mm < M && 0 <= nn && nn < N && board[mm][nn] > board[m][n] && board[mm][nn]>0) {
                save[m][n] += cal(mm, nn);
            }
        }
        return save[m][n];
    }
}


int main (void) {
    scanf("%d %d", &M, &N);
    board[505][505] =  {0,};
    for(int i = 0; i < M; i ++) {
        for(int j = 0; j < N; j ++) {
            scanf("%d", &board[i][j]);
        }
    }
    for(int i = 0; i < M; i ++) {
        for(int j = 0; j < N; j ++) {
            board[i][j] -= board[M-1][N-1];
        }
    }
    // cal(M-1,N-1);
    printf("%d\n", cal(M-1, N-1));
    // cout << cal(M-1, N-1) << "\n";
    return 0;

}

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

// int M, N;
// int board[505][505];
// int save[505][505] = {1,};
// int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
// int ans = 0;


// // 다이나믹 프로그래밍이니까.. 지나가면서 값을 저장해야되나?!

// void cal(int m, int n) {
//     int mm, nn;
//     for(int i = 0; i < 4; i ++) {
//         mm = m + dir[i][0];
//         nn = n + dir[i][1];
//         if (0 <= mm && mm < M && 0 <= nn && nn < N) {
//             if (mm == M-1 && nn == N-1) {
//                 save[mm][nn] ++;
//             }
//             else if (save[mm][nn] == 1) {
//                 cal(mm, nn);
//             }
//             else {
//                 save[mm][nn] = 1;
//                 cal(mm, nn);
//             }
            
//         }
//     }
// }


// int main (void) {
//     cin >> M >> N;
//     board[505][505] =  {0,};
//     for(int i = 0; i < M; i ++) {
//         for(int j = 0; j < N; j ++) {
//             cin >> board[i][j];
//         }
//     }
//     cal(0,0);
//     cout << save[3][4] << "\n";
//     return 0;

// }