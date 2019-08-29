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

// int N, tmp, idx = 1;
// int board[100002][2] = {0,};

// void he(int);
// int dow(int*);

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
    
//     for(int i = 0; i < N;i ++) {
//         // cout << "idx  " << idx << "\n";
//         // for(int j = 1; j <= idx; j ++) {
//         //     cout << "list" << board[idx][1];
//         //     // cout << 
//         // }
//         cin >> tmp;
//         if (tmp == 0) {
//             if (idx == 1) {
//                 cout << 0<<"\n";
//             }
//             else {
//                 cout << dow(&idx)<<"\n";
//             }
//         }
//         else {
//             board[idx][1] = tmp;
//             board[idx][0] = abs(tmp);
//             he(idx);
//             idx ++;

//         }
//         cout << "here1\n";
//         for(int j = 1; j < idx; j ++) {
//             cout << j << " " <<  board[j][1]<< "\n";
//         }
//         cout << "here2\n";
        
//     }
// }

// //올라가는거 완료
// void he(int idx) {
//     if (idx == 1) {

//     }
//     else {
//         if (board[idx/2][0] > board[idx][0]) {
//             int tmp = board[idx/2][0];
//             board[idx/2][0] = board[idx][0];
//             board[idx][0] = tmp;
//             tmp = board[idx/2][1];
//             board[idx/2][1] = board[idx][1];
//             board[idx][1] = tmp;
//             he(idx/2);
//         }
//         else if ( board[idx/2][0] == board[idx][0]) {
//             if (board[idx/2][1] > board[idx][1]) {
//                 int tmp = board[idx/2][1];
//                 board[idx/2][1] = board[idx][1];
//                 board[idx][1] = tmp;
//                 he(idx/2);
//             }
//         }
//     }
// }


// // 빼기, 맨 위의 값을 반환
// int dow(int* idx) {
//     *idx -= 1;
//     int ret = board[1][1];
//     cout << "ret " << board[1][1] << "\n";
//     board[1][0] = board[*idx][0];
//     board[1][1] = board[*idx][1];
    
//     board[*idx][0] = 0;
//     board[*idx][1] = 0;
//     cout << "ret " << board[1][1] << "\n";
//     cout << "ret " << board[2][1] << "\n";
//     cout << "ret " << board[3][1] << "\n";
//     int tmpidx = 1;
//     while(tmpidx < *idx) {
//         if (board[tmpidx][0] > board[2*tmpidx][0] && board[2*tmpidx][0] != 0) {
//             if (board[tmpidx*2+1][0] < board[tmpidx][0] && board[1+2*tmpidx][0] != 0) {
//                 if (board[tmpidx*2][0] < board[tmpidx*2+1][0]) {
//                     he(tmpidx*2);
//                     tmpidx = tmpidx * 2;
//                 }
//                 else if (board[tmpidx*2+1][0] < board[tmpidx*2][0] && board[1+2*tmpidx][0] != 0) {
//                     he(tmpidx*2+1);
//                     tmpidx = tmpidx *2 + 1;
//                 }
//             }
//             else {
//                 he(tmpidx*2);
//                 tmpidx= tmpidx *2;
//             }
//         }
//         else if (board[2*tmpidx+1][0] < board[tmpidx][0]  && board[1+2*tmpidx][0] != 0) {
//             he(tmpidx*2+1);
//             tmpidx= tmpidx*2+1;
//         }

//     }
//     return ret;
// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <deque>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N;
// int x;
// deque <pair <int, int > > deq(100002, mp(0, 0));
// int idx;

// void ins(int);

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     idx = 1;
//     for(int i = 0;i < N; i ++) {
//         cin >> x;
//         if (x == 0) {

//         }
//         else {
//             ins(x);
//         }
//     }
//     for(int i = 1; i < idx; i ++) {
//         cout << deq[i].first << " " << deq[i].second << "\n";
//     }
// }

// //올라가는건 잘 되고 있음.
// void ins(int x) {
//     deq[idx] = mp(abs(x), x);
//     int idxtmp = idx;
//     pair <int, int> tmpdeq;
//     while(1 < idxtmp) {
//         if (deq[idxtmp/2].first > deq[idxtmp].first) {
//             tmpdeq = deq[idxtmp/2];
//             deq[idxtmp/2] = deq[idxtmp];
//             deq[idxtmp] = tmpdeq;
//         }
//         else if (deq[idxtmp/2].first == deq[idxtmp].first) {
//             if (deq[idxtmp].second < deq[idxtmp/2].second) {
//                 tmpdeq = deq[idxtmp/2];
//                 deq[idxtmp/2] = deq[idxtmp];
//                 deq[idxtmp] = tmpdeq;
//             }
//         }
//         idxtmp/=2;
//     }
//     idx++;
// }

// int po() {
//     if (idx == 0) {
//         return 0;
//     }
//     else {
//         int ret = deq[1].second;
//         idx -=1;
//         deq[1] = deq[idx];
//         deq[idx].first = 0;
//         deq[idx].second = 0;
//         int idxtmp = 1;
//         pair <int, int> tmpdeq;
//         while(idxtmp < idx) {
//             if (deq[idxtmp*2].first == 0) {
//                 break;
//             }
//             else {
//                 if (deq[idxtmp*2+1].first == 0) {
//                     //왼쪽만 보기
//                     if (deq[idxtmp].first > deq[idxtmp*2].first) {
//                         tmpdeq = deq[idxtmp];
//                         deq[idxtmp] = deq[idxtmp*2];
//                         deq[idxtmp*2] = tmpdeq;
//                     }
//                     else if (deq[idxtmp].first == deq[idxtmp*2].first) {
//                         if (deq[idxtmp*2].second < deq[idxtmp].second) {

//                         }
//                     }
//                     idxtmp *=2;
//                 }
//                 else {
//                     // 둘 다 확인
//                 }
//             }
//         }


//         return ret;
//     }
// }

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

// int N, tmp;
// vector <pair<int, int>> v;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     for(int i = 0;i < N; i ++) {
//         cin >> tmp;
//         if (tmp == 0) {
//             if (v.empty()) {
//                 cout << 0 << "\n";
//             }
//             else {
//                 cout << v[0].second<<"\n";
//                 v[0].first = MAX;
//                 sort(v.begin(), v.end());
//                 v.pop_back();
//             }
//         }
//         else {
//             v.pb(mp(abs(tmp), tmp));
//             sort(v.begin(), v.end());
//         }
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
# include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, tmp;
priority_queue <pair<int, int>> pos, neg;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> tmp;
        if (tmp == 0) {
            if (pos.empty() && neg.empty()) {
                cout << 0 << "\n";
            }
            else if (!pos.empty() && !neg.empty()) {
                if (pos.top().first == neg.top().first) {
                    cout << neg.top().second << "\n";
                    neg.pop();
                }
                else if (neg.top().first<pos.top().first) {
                    cout << pos.top().second << "\n";
                    pos.pop();
                }
                else {
                    cout << neg.top().second << "\n";
                    neg.pop();
                }
            }
            else if (!pos.empty()) {
                cout << pos.top().second << "\n";
                pos.pop();
            }
            else if (!neg.empty()) {
                cout << neg.top().second << "\n";
                neg.pop();
            }
        }
        else {
            if (0 < tmp) {
                pos.push(mp(-tmp,tmp));
            }
            else {
                neg.push(mp(tmp, tmp));
            }
        }
    }
    return 0;
}