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

// int M, N, ans = 0;
// int board[502][502] = {0,};
// int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};


// void cal(int a, int b) {
//     if (a == M-1 && b == N-1) {
//         ans ++;
//     }
//     else {
//         for(int i = 0; i < 4; i ++) {
//             int aa, bb;
//             aa = a + dir[i][0];
//             bb = b + dir[i][1];
//             if (aa >= 0 && bb >= 0 && aa<M && bb<N && board[aa][bb] < board[a][b]) {
//                 cout <<aa << " " << bb << "\n";
//                 cal(aa, bb);
//             }
//         }
//     }
    
// }

// int main (void) {
//     cin >> M >> N;
//     for(int i = 0; i < M; i ++) {
//         for(int j = 0; j < N;j ++) {
//             cin >> board[i][j];
//         }
//     }
//     cal(0,0);
//     cout << ans << "\n";

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

int M, N, ans = 0;
int board[502][502] = {0,};
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int save[502][502] = {0,};

int cal(int a, int b) {
    for(int i = 0; i < 4; i ++) {
        int aa, bb;
        aa = a + dir[i][0];
        bb = b + dir[i][1];
        if (0 <= aa && aa < M && 0 <= bb && bb < N && board[a][b] > board[aa][bb])
            save[aa][bb] += save[a][b];
        }
    if (save[a][b] != 0) {
        return save[a][b];
    } 
    else {
        
    }
}

int cal(int a, int b) {
    if (a == 0&&b == 0) {
        return 1;
    }
    else if (save[a][b] != 0) {
        return save[a][b];
    }
    else {
        for(int i = 0; i < 4; i ++) {
            int aa, bb;
            aa = a + dir[i][0];
            bb = b + dir[i][1];
            if ( 0 <= aa && aa < M && 0 <= bb && bb < N && board[a][b] < board[aa][bb]) {
                // cout << aa << " " << bb << "\n";
                save[a][b] += cal(aa, bb);
                // cout << "여기\n";
            }
        }
        return save[a][b];
    }
}

int main (void) {
    cin >> M >> N;
    for(int i = 0; i < M; i ++) {
        for(int j = 0; j < N;j ++) {
            cin >> board[i][j];
        }
    }
    cout <<cal(M-1,N-1) <<"\n";
    // for(int i = 0; i < M; i ++) {
    //     for(int j = 0;j < N; j ++) {
    //         printf("%4d ", save[i][j]);
    //     }
    //     cout << "\n";
    // }
    // cout << ans << "\n";

}

// 4 5
// 50 45 37 32 30
// 35 50 40 20 25
// 30 30 25 17 13
// 27 24 22 15 10