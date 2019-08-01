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

// int n, k;
// int board[102] = {0,};
// ll ans;
// int d[10002] = {0,};

// int cal(int a) {
//     if (d[a] != 0) {
//         return d[a];
//     }
//     else {
//         for(int i = 1; i <= (a-1)/2; i ++) {
//             d[a] += cal(i)*cal(a-i);
//         }
//         if (a %2==0) {
//             d[a] += cal(a/2)*cal(a/2);
//         }
//         return d[a];
//     }
// }

// int main (void) {
//     cin >> n >> k;
//     for(int i = 1; i <= n; i ++) {
//         cin >> board[i];
//         d[board[i]]++;
//     }
//     d[1] = cal(1);
//     cout << cal(k) << "\n";
//     for(int i = 1; i <= k; i ++) {
//         cout << d[i] << "\n";
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

// int n, k;
// int board[102] = {0,};
// int d[10002]={0,};

// int main (void) {
//     cin >> n >> k;
//     for(int i = 1; i <= n; i ++) {
//         cin >> board[i];
//         d[board[i]]++;
//         //동전 한 종류로 만들 수 있는 개수 넣기
//         // for(int j =1; board[i]*j <= k; j ++) {
//         //     d[board[i]*j] ++;
//         // }
//     }
//     for(int i = 1; i <n; i ++) {
//         for(int j = i+1; j <= n ; j ++) {
//             if (board[j]%board[i]==0) {
//                 d[board[j]]++;
//             }
//         }
//     }
//     for(int j = 3; j <= k; j ++) {
//         for(int l = 1; l <= ((j-1)/2); l ++) {
//             cout <<j <<" " <<  l<<" "<<d[j] << " " << d[l]*d[j-l] <<"\n";
//             d[j] += d[l]*d[j-l];
//         }
//             // if (j%2==0) {
//             //     d[j] += d[j/2]*d[j/2];
//             // }
//         }
    
//     for(int i = 0; i <= k; i ++) {
//         cout <<d[i] << "\n";
//     }
// }


// 와 너 무 어 렵 다
// 어떻게 다들 저렇게 생각하는거지?
// 난 소질이 없나 ㅜㅠ

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

int n, k;
int board[10002] = {0,};
int save[10002] = {1,};

int main (void) {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> board[i];
    }

    for(int i = 1; i <= n; i ++) {
        for(int j = board[i]; j <=k; j ++) {
            save[j] += save[j-board[i]];
        }
    }
    // for(int i = 1; i <= k; i++) {
    //     cout << save[i] << "\n";
    // }
    cout << save[k] << "\n";
    return 0;
}