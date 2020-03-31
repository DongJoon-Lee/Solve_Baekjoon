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

// // char board[52][52], tmp;
// // int tok[52][52];
// // int N;
// // int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// // int ans = 0;
// // int ans2, ans3;
// // int chk = 1; // 1일 때 가로, -1일 때 세로

// // void cal2(int a, int b) { // 가로
    
// //     tok[a][b] = 1;
// //     for(int i = 0;i < 2; i ++) {
// //         int xx = a + dir[i][0];
// //         // cout << " "<< xx <<"\n";
// //         // tok[xx][b] = 1;
// //         if (tok[xx][b] == 0 && 1<= xx && xx <= N && board[a][b] == board[xx][b]) {
// //             // cout << xx <<" " << b <<"aaa \n";
// //             ans2 += 1;
// //             cal2(xx, b);
// //         }
// //     }
// //     // ans2 += 1;
// // }

// // void cal3(int a, int b) { // 세로
// //     // for(int i = 0; i < 52; i ++) {
// //     //     fill_n(tok[i], 52, 0);
// //     // }
// //     tok[a][b] = 1;
// //     for(int i = 2; i <= 3; i ++) {
// //         int yy = b + dir[i][1];
// //         // tok[a][yy] = 1;
// //         if (tok[a][yy] == 0 && 1<= yy && yy <= N && board[a][b] == board[a][yy]) {
// //             ans3 += 1;
// //             cal3(a, yy);
// //         }
// //     }
// //     // ans3 += 1;
// // }

// // void cal(int a, int b) {
// //     if (chk == 1) {
// //         tmp = board[a][b];
// //         board[a][b] = board[a][b+1];
// //         board[a][b+1] = tmp;
// //         // for(int i = 1; i <= N; i ++) {
// //         //     for(int j= 1; j <= N; j ++) {
// //         //         cout << board[i][j];
// //         //     }
// //         //     cout <<"\n";
// //         // }
// //         // printf("%d\n\n", cal2(a, b));
        
// //         for(int i = 0; i < 52; i ++) {
// //         fill_n(tok[i], 52, 0);
// //     }
// //     ans2 = 1;
// //     for(int i = 1; i <= N; i ++) {
// //         for(int j = 1; j <= N; j ++) {
// //             cal2(i, j);
// //         ans = max(ans2, ans);
// //         }
// //     }
    
// //         for(int i = 0; i < 52; i ++) {
// //         fill_n(tok[i], 52, 0);
// //     }
// //         // cout << ans <<" ans \n"; //////////
// //         ans3 = 1;
// //         for(int i = 1; i <= N; i ++) {
// //         for(int j = 1; j <= N; j ++) {
// //             cal3(i, j);
// //         ans = max(ans3, ans);
// //         }
// //     }
// //         // cal3(a, b);
// //         // ans = max(ans3, ans);
// //         for(int i = 0; i < 52; i ++) {
// //         fill_n(tok[i], 52, 0);
// //     }
// //     // ans2 = 1;
    
// //     // cal2(a, b+1);
// //     //     ans = max(ans2, ans);
// //     //     for(int i = 0; i < 52; i ++) {
// //     //     fill_n(tok[i], 52, 0);
// //     // }
// //     // ans3 = 1;
// //     // cal3(a, b+1);
// //         // ans = max(ans3, ans);
// //         tmp = board[a][b];
// //         board[a][b] = board[a][b+1];
// //         board[a][b+1] = tmp;
// //     }
// //     else {
// //         tmp = board[a][b];
// //         board[a][b] = board[a+1][b];
// //         board[a+1][b] = tmp;
// //         for(int i = 0; i < 52; i ++) {
// //         fill_n(tok[i], 52, 0);
// //     }
// //     ans2 = 1;
// //             for(int i = 1; i <= N; i ++) {
// //         for(int j = 1; j <= N; j ++) {
// //             cal2(i, j);
// //         ans = max(ans2, ans);
// //         }
// //             }
// //     // cal2(a, b);
// //     //     ans = max(ans2, ans);
// //         for(int i = 0; i < 52; i ++) {
// //         fill_n(tok[i], 52, 0);
// //     }
// //         // cout << ans <<" ans \n"; //////////
// //         ans3 = 1;
// //                 for(int i = 1; i <= N; i ++) {
// //         for(int j = 1; j <= N; j ++) {
// //             cal3(i, j);
// //         ans = max(ans3, ans);
// //         }
// //                 }
// //         // cal3(a, b);
// //         // ans = max(ans3, ans);
// //         for(int i = 0; i < 52; i ++) {
// //         fill_n(tok[i], 52, 0);
// //     }
// //     // ans2 = 1;
// //     // cal2(a+1, b);
// //     //     ans = max(ans2, ans);
// //     //     for(int i = 0; i < 52; i ++) {
// //     //     fill_n(tok[i], 52, 0);
// //     // }
// //     // ans3 = 1;
// //     // cal3(a+1, b);
// //     //     ans = max(ans3, ans);
        
// //         tmp = board[a][b];
// //         board[a][b] = board[a+1][b];
// //         board[a+1][b] = tmp;
// //     }
// // }


// // int main (void) {
// //     // ios_base::sync_with_stdio(0);
// //     // cin.tie(0);

// //     for(int i = 0; i < 52; i ++) {
// //         fill_n(board[i], 52, 'A');
// //     }

// //     cin >> N;
// //     for(int i = 1; i <= N; i ++) {
// //         for(int j = 1; j <= N; j ++) {
// //             cin >> board[i][j];
// //         }
        
// //     }

// //     // for(int i = 0; i < N; i ++) {
// //     //     for(int j = 0; j < N-1; j ++) {
// //     //         cal(i, j);
// //     //         if (ans == )
// //     //     }
// //     // }
    
// //     // cal(4, 1);
// //     // for(int i = 1; i <= N; i ++) {
// //     //         for(int j= 1; j <= N; j ++) {
// //     //             cout << board[i][j];
// //     //         }
// //     //         cout <<"\n";
// //     //     }
// //     // cout << ans <<"\n";
// //     for(int i = 1; i < N; i ++) {
// //         for(int j = 1; j < N; j ++) {
// //             cal(i, j);
// //         }
// //     }
// //     chk  = -1;
// //     for(int i = 1; i < N; i ++) {
// //         for(int j = 1; j < N; j ++) {
// //             cal(i, j);
// //         }
// //     }
// //     cout << ans <<"\n";
    

// //     return 0;
// // }

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

// char board[52][52], tmp;
// int tok[52][52];
// int N;
// int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// int ans = 0;
// int ans2, ans3;
// int chk = 1; // 1일 때 가로, -1일 때 세로

// void cal2(int a, int b) { // 가로
    
//     tok[a][b] = 1;
//     for(int i = 0;i < 2; i ++) {
//         int xx = a + dir[i][0];
//         // cout << " "<< xx <<"\n";
//         // tok[xx][b] = 1;
//         if (tok[xx][b] == 0 && 1<= xx && xx <= N && board[a][b] == board[xx][b]) {
//             // cout << xx <<" " << b <<"aaa \n";
//             ans2 += 1;
//             cal2(xx, b);
//         }
//     }
//     // ans2 += 1;
// }

// void cal3(int a, int b) { // 세로
//     // for(int i = 0; i < 52; i ++) {
//     //     fill_n(tok[i], 52, 0);
//     // }
//     tok[a][b] = 1;
//     for(int i = 2; i <= 3; i ++) {
//         int yy = b + dir[i][1];
//         // tok[a][yy] = 1;
//         if (tok[a][yy] == 0 && 1<= yy && yy <= N && board[a][b] == board[a][yy]) {
//             ans3 += 1;
//             cal3(a, yy);
//         }
//     }
//     // ans3 += 1;
// }

// /*
// void cal(int a, int b) {
//     if (chk == 1) {
//         tmp = board[a][b];
//         board[a][b] = board[a][b+1];
//         board[a][b+1] = tmp;
//         // for(int i = 1; i <= N; i ++) {
//         //     for(int j= 1; j <= N; j ++) {
//         //         cout << board[i][j];
//         //     }
//         //     cout <<"\n";
//         // }
//         // printf("%d\n\n", cal2(a, b));
        
//         for(int i = 0; i < 52; i ++) {
//         fill_n(tok[i], 52, 0);
//     }
//     ans2 = 1;
//     for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             cal2(i, j);
//         ans = max(ans2, ans);
//         }
//     }
    
//         for(int i = 0; i < 52; i ++) {
//         fill_n(tok[i], 52, 0);
//     }
//         // cout << ans <<" ans \n"; //////////
//         ans3 = 1;
//         for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             cal3(i, j);
//         ans = max(ans3, ans);
//         }
//     }
//         // cal3(a, b);
//         // ans = max(ans3, ans);
//         for(int i = 0; i < 52; i ++) {
//         fill_n(tok[i], 52, 0);
//     }
//     // ans2 = 1;
    
//     // cal2(a, b+1);
//     //     ans = max(ans2, ans);
//     //     for(int i = 0; i < 52; i ++) {
//     //     fill_n(tok[i], 52, 0);
//     // }
//     // ans3 = 1;
//     // cal3(a, b+1);
//         // ans = max(ans3, ans);
//         tmp = board[a][b];
//         board[a][b] = board[a][b+1];
//         board[a][b+1] = tmp;
//     }
//     else {
//         tmp = board[a][b];
//         board[a][b] = board[a+1][b];
//         board[a+1][b] = tmp;
//         for(int i = 0; i < 52; i ++) {
//         fill_n(tok[i], 52, 0);
//     }
//     ans2 = 1;
//             for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             cal2(i, j);
//         ans = max(ans2, ans);
//         }
//             }
//     // cal2(a, b);
//     //     ans = max(ans2, ans);
//         for(int i = 0; i < 52; i ++) {
//         fill_n(tok[i], 52, 0);
//     }
//         // cout << ans <<" ans \n"; //////////
//         ans3 = 1;
//                 for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             cal3(i, j);
//         ans = max(ans3, ans);
//         }
//                 }
//         // cal3(a, b);
//         // ans = max(ans3, ans);
//         for(int i = 0; i < 52; i ++) {
//         fill_n(tok[i], 52, 0);
//     }
//     // ans2 = 1;
//     // cal2(a+1, b);
//     //     ans = max(ans2, ans);
//     //     for(int i = 0; i < 52; i ++) {
//     //     fill_n(tok[i], 52, 0);
//     // }
//     // ans3 = 1;
//     // cal3(a+1, b);
//     //     ans = max(ans3, ans);
        
//         tmp = board[a][b];
//         board[a][b] = board[a+1][b];
//         board[a+1][b] = tmp;
//     }
// }*/

// void cal(int a, int b) {
//     if (chk == 1) { // 가로 swap
//         tmp = board[a][b];
//         board[a][b] = board[a][b+1];
//         board[a][b+1] = tmp;
//         // swap 완료
        
//         //이제 검사
        
//         // 가로 검사
//         for(int i = 1; i <= N; i ++) {
//             for(int j = 1; j <= N; j ++) {
//                 for(int k = 0; k < 52; k ++) {
//                     fill_n(tok[i], 52, 0);
//                 }
//                 ans2 = 1; 
//                 cal2(i, j);
//                 ans = max(ans2, ans);
//                 // cout << ans <<"   " << i << " " << j <<"\n";
//             }
//         }
//         // 세로검사
//         for(int i = 1; i <= N; i ++) {
//             for(int j = 1; j <= N; j ++) {
//                 for(int k = 0; k < 52; k ++) {
//                     fill_n(tok[i], 52, 0);
//                 }
//                 ans3 = 1; 
//                 cal3(i, j);
//                 ans = max(ans3, ans);
//                 // cout << ans <<"   " << i << " " << j <<"\n";
//             }
//         }
//         tmp = board[a][b];
//         board[a][b] = board[a][b+1];
//         board[a][b+1] = tmp;
//     }
//     else {
//         tmp = board[a][b];
//         board[a][b] = board[a+1][b];
//         board[a+1][b] = tmp;
//         // swap 완료
        
//         //이제 검사
        
//         // 가로 검사
//         for(int i = 1; i <= N; i ++) {
//             for(int j = 1; j <= N; j ++) {
//                 for(int k = 0; k < 52; k ++) {
//                     fill_n(tok[i], 52, 0);
//                 }
//                 ans2 = 1; 
//                 cal2(i, j);
//                 ans = max(ans2, ans);
//                 // cout << ans <<"   " << i << " " << j <<"\n";
//             }
//         }
//         // 세로검사
//         for(int i = 1; i <= N; i ++) {
//             for(int j = 1; j <= N; j ++) {
//                 for(int k = 0; k < 52; k ++) {
//                     fill_n(tok[i], 52, 0);
//                 }
//                 ans3 = 1; 
//                 cal3(i, j);
//                 ans = max(ans3, ans);
//                 // cout << ans <<"   " << i << " " << j <<"\n";
//             }
//         }
//         tmp = board[a][b];
//         board[a][b] = board[a+1][b];
//         board[a+1][b] = tmp;
//     }
// }


// int main (void) {
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);

//     for(int i = 0; i < 52; i ++) {
//         fill_n(board[i], 52, 'A');
//     }

//     cin >> N;
//     for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             cin >> board[i][j];
//         }
        
//     }

//     // for(int i = 0; i < N; i ++) {
//     //     for(int j = 0; j < N-1; j ++) {
//     //         cal(i, j);
//     //         if (ans == )
//     //     }
//     // }
    
//     // cal(4, 1);
//     // for(int i = 1; i <= N; i ++) {
//     //         for(int j= 1; j <= N; j ++) {
//     //             cout << board[i][j];
//     //         }
//     //         cout <<"\n";
//     //     }
//     // cout << ans <<"\n";
//     for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j < N; j ++) {
//             // cout << "aaaaaaaaaa " << i << "\n";
//             cal(i, j);
//         }
//     }
//     // chk  = -1;
//     // for(int i = 1; i < N; i ++) {
//     //     for(int j = 1; j <= N; j ++) {
//     //         cal(i, j);
//     //     }
//     // }
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

int N;
char board[52][52], tmp; // 1에서 시작
int ans=0, sav;

void cal() {
    // 가로
    for(int i = 1; i <= N; i ++) {
        sav = 1;
        for(int j = 1; j < N; j ++) {
            if (board[i][j] == board[i][j+1]) {
                sav ++;
            }
            else {
                ans = max(sav, ans);
                sav = 1;
            }
        }
        ans = max(sav, ans);
    }
    ans = max(sav, ans);
    // 세로
    for(int i = 1; i <= N; i ++) {
        sav = 1;
        for(int j= 1; j < N; j ++) {
            if(board[j][i] == board[j+1][i]) {
                sav ++;
            }
            else {
                ans = max(sav, ans);
                sav= 1;
            }
        }
        ans = max(sav, ans);
    }
    ans = max(sav, ans);
}

void swa(int a, int b) {
    if (b < N) {
        tmp = board[a][b];
        board[a][b] = board[a][b+1];
        board[a][b+1] = tmp;

        cal();
        tmp = board[a][b];
        board[a][b] = board[a][b+1];
        board[a][b+1] = tmp;
        // cout << "in 1\n";
    }
    if (a < N) {
        tmp = board[a][b];
        board[a][b] = board[a+1][b];
        board[a+1][b] = tmp;
        cal();
        tmp = board[a][b];
        board[a][b] = board[a+1][b];
        board[a+1][b] = tmp;
        // cout << "in 2\n";
    }
}

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            cin >> board[i][j];
        }
    }

    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j <= N; j ++) {
            swa(i, j);
            // printf("%d %d\n", i, j);
        }
    }
    cout << ans <<"\n";

    return 0;
}