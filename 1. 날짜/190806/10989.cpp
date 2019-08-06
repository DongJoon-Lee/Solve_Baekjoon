// // # include <string>
// // # include <iostream>
// // # include <vector>
// // # include <queue>
// // # include <stdio.h>
// // # include <algorithm>
// // # include <ctype.h>
// // using namespace std;
// // typedef long long ll;
// // # define pb push_back
// // # define mp make_pair

// // const int MAX = 2147483647;
// // const int MIN = -2147483648;

// // int N;
// // int board[10000002] = {0,};
// // int num[10000002] = {0,};

// // int main (void) {
// //     scanf("%d", &N);
// //     // cin >> N;
// //     for(int i = 1; i <= N; i ++) {
// //         // cin >> board[i];
// //         scanf("%d", &board[i]);
// //         num[board[i]]++;
// //     }
// //     for(int i = 2; i <10000002; i ++ ) {
// //         num[i] += num[i-1];
// //     }
// //     int ans[N+1] = {0,};
// //     for(int i = N; 1 <= i; i --) {
// //         ans[num[board[i]]] = board[i];
// //         num[board[i]] --;
// //     }
// //     for(int i = 1; i <= N; i ++) {
// //         printf("%d\n", ans[i]);
// //         // cout << ans[i] << "\n";
// //     }

// // }

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

// int N;
// int tmp = 0;
// vector <pair < int, int > > v;
// int board[10000002] = {0,};

// int main (void) {
//     scanf("%d", &N);
//     int ans[N+1] = {0,};
//     for(int i = 1; i <= N; i ++) {
//         scanf("%d", &board[i]);
//         tmp = 0;
//         for(int j = 0; j < v.size(); i ++) {
//             if (v[j].first == board[i]) {
//                 v[j].second ++;
//                 tmp = -1;
//                 break;
//             }
            
//         }
//         if (tmp != -1) {
//             v.pb(mp(tmp,1));
//         }
        
//     }    
//     sort(v.begin(), v.end());
    

//     for(int i = 1; i < v.size(); i ++) {
//         v[i].second += v[i-1].second;
//     }

//     //테스트
//     for(int i = 0; i < v.size(); i ++) {
//         cout << v[i].first << " " << v[i].second << "\n";
//     }
//     //
//     // int ans[N+1] = {0,};
    

// }

# include <stdio.h>
// typedef long long ll;

// 카운팅 정렬이 무엇인지 알게 되었다.
// 신기하네..

int N;
// int board[10000002] = {0,};
int cou[10002] = {0,};
int tmp = 0;

int main (void) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i ++) {
        scanf("%d", &tmp);
        cou[tmp] ++;
    }
    for(int i = 1; i < 10002; i ++) {
        if (cou[i] != 0) {
            printf("%d\n", i);
            cou[i]--;
            i--;
        }
    }
    return 0;
    // int ans[N+2] = {0,};
    // for(int i = 2; i < 10002; i ++) {
    //     cou[i]+=cou[i-1];
    // }
    // for(int i = N; 1 <= i; i --) {
    //     ans[cou[board[i]]] = board[i];
    //     cou[board[i]]--;
    // }
    // for(int i = 1; i <= N; i ++) {
    //     printf("%d\n", ans[i]);
    // }
}