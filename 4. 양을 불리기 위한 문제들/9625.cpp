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

// int K,couA=0,couB=0;
// queue <char> q;

// void cal(queue<char>);

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     cin >> K;
//     q.push('A');
//     for(int i = 0; i < K; i ++) {
//         int siz;
//         char tmp;
//         siz = q.size();
//         for(int j = 0; j < siz; j ++) {
//             if (q.front() == 'A') {
//                 q.push('B');
//                 q.pop();
//             }
//             else {
//                 q.push('A');
//                 q.push('B');
//                 q.pop();
//             }
//         }
//     }
//     int siz = q.size();
//     for(int i = 0; i < siz; i ++) {
//         if (q.front() == 'A') {
//             couA ++;
//         }
//         else {
//             couB++;
//         }
//         q.pop();
//     }
    
//     cout << couA<<" " << couB<<"\n";
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

int K, A=1, ak=0,bk=0,B=0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> K;
    for(int i = 0; i < K; i++) {
        ak=0;
        bk+=A;
        ak+=B;
        A=ak;
        B=bk;
    }
    cout << A << " " << B<<"\n";
}