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

// ll n, m, k,l;


// int cou2(int);
// int cou5(int);


// int main (void) {
//     cin >> n >> m;
//     k = 0;
//     l = 0;
//     if (n == m || m == 0) {
//         cout << 0<<"\n";
//     }
//     else {
//         for(int i = 0; i < m; i ++) {
//             k += cou2(n-i);
//             l += cou5(n-i);
//         }
//         for(int i = 1; i<=m; i ++) {
//             k -= cou2(i);
//             l-= cou5(i);
//         }
//         cout << min(k,l)<< "\n";
//     }
//     return 0;
// }


// int cou2(int a) {
//     if (a%2 == 0) {
//         return 1 + cou2(a/2);
//     }
//     else {
//         return 0;
//     }
// }

// int cou5(int a) {
//     if (a%5 == 0) {
//         return 1 + cou5(a/5);
//     }
//     else {
//         return 0;
//     }
// }


// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <cmath>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int n, m;
// int cou2=0, cou5=0;
// int bunza_2=0;
// int bunza_5=0;

// int cou_2(int);
// int cou_5(int);

// int main (void) {
//     // cout << pow(2, 32) << "\n" << pow(5, 15) << "\n";
//     cin >> n >> m;
//     if (m == 0 || n == m) {
//         cout << 0 << "\n";
//         return 0;
//     }
//     for(int i = 0; i < m; i ++) {
//         bunza_2 += cou_2(n-i);
//         bunza_5 += cou_5(n-i);
//     }
//     for(int i = m; 1<= i; i --) {
//         bunza_2 -= cou_2(i);
//         bunza_5 -= cou_5(i);
//     }
//     // cout << bunza_2<< " " << bunza_5<< "\n";
//     cout << min(bunza_2, bunza_5) << "\n";
//     return 0;

// }

// int cou_2(int a) {
//     if (a%2 != 0) {
//         return 0;
//     }
//     else {
//         for(int i = 1; i<=31; i ++) {
//             if (a/pow(2,i)<1) {
//                 return i;
//                 break;
//             }
//         }
//     }
// }
// int cou_5(int a) {
//     if (a%5 != 0) {
//         return 0;
//     }
//     else {
//         for(int i = 1; i<=15; i ++) {
//             if (a/pow(5,i)<1) {
//                 return i-1;
//                 break;
//             }
//         }
//     }
// }

// 하 너무 어렵다.
// 다시 한 번 생각해봐야 할 것 같다.
// 난 역시 많이 부족하다.
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

int n, m;
int cou2=0, cou5 = 0;

int count2(int);
int count5(int);

int main (void) {
    cin >> n >> m;
    // if (n==m || m == 0) {
    //     cout << 0 << "\n";
    // }
    // else {
    //     cou2 = count2(n)-count2(m);
    //     cou5 = count5(n) - count5(m);
    //     if (n-m != 0) {
    //         cou2 -= count2(n-m);
    //         cou5 -= count5(n-m);
    //     }
    //     cout << min(cou2, cou5) << "\n";
    // }
    cou2 = count2(n)-count2(m);
    cou5 = count5(n) - count5(m);
    if (n-m != 0) {
        cou2 -= count2(n-m);
        cou5 -= count5(n-m);
    }
    cout << min(cou2, cou5) << "\n";
    return 0;
}

int count2(int a) {
    int ret=0;
    for(ll i = 2; a/i>=1; i*=2) {
        ret += a/i;
    }
    return ret;
}

int count5(int a) {
    int ret = 0;
    for(ll i = 5; a/i >= 1; i *= 5) {
        ret += a/i;
    }
    return ret;
}