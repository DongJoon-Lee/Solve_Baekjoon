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
// int board[1502][1502];
// priority_queue <pair<int, pair <int, int>>> pq; //  값, 인덱스 순으로
// // priority queue에서 아무것도 안썼으니까 내림차순이고, 값이 우선이니까 가장 큰 값이 인덱스를 저장한 상태로 top의 위치로 이동한다.

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     for(int i = 1; i <= N; i ++) {
//         for(int j = 1; j <= N; j ++) {
//             cin >> board[i][j];
//             if (i == N) {
//                 pq.push(mp(board[i][j], mp(i, j)));
//             }
//         }
//     }
//     pair<int, int> tmp;
//     for(int i = 0;i <4; i ++) {
//         tmp = pq.top().second;
//         pq.pop();
//         pq.push(mp(board[tmp.first-1][tmp.second], mp(tmp.first-1,tmp.second)));
//     }
//     cout << pq.top().first<<"\n";
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

// 계속 N개씩만 저장한다면?
// N번째 큰 숫자가 계속 queue의 top에 있어야 한다.
int N, tmp;
priority_queue <int, vector<int>, greater<int>> pq;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N*N; i ++) {
        cin >> tmp;
        if (pq.size() < N) {
            pq.push(tmp);
        }
        else {
            if (pq.top() < tmp) {
                pq.pop();
                pq.push(tmp);
            }
        }
    }
    cout << pq.top()<<"\n";
    return 0;
}