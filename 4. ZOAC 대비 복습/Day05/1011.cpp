// //아 이걸 어떻게 알아 ㅜㅠ

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <cstdlib>
// #include <queue>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// ll a, b, c, midd;
// int chk=1;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> a;
//     for(int i = 0; i < a; i ++) {
//         cin >> b >> c;
//         chk = 1;
//         while(!(chk*chk<=(c-b) && (c-b)<=(chk+1)*(chk+1))) {
//             chk++;
//         }
//         // cout << chk;
//         if (((chk+1)*(chk+1)+chk*chk)%2!=0) {
//             midd = ((chk+1)*(chk+1)+chk*chk)/2+1;
//         }
//         else {
//             midd = ((chk+1)*(chk+1)+chk*chk)/2;
//         }
        
//         if((c-b)<midd) {
//             cout << 2*chk<<"\n";
//         }
//         else {
//             cout << 2*chk+1<<"\n";
//         }

//     }
//     return 0;
// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <cstdlib>
// #include <queue>
// # include <math.h>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// ll x, y;
// int n,i=1, midn;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> n;
//     while(n--) {
//         cin >> x >> y;
//         for(;;i++) {
//             if (y-x <=i*i) {
//                 break;
//             }
//         }
//         // cout <<i<<"\n";
//         int midp = ((i*i)+(i-1)*(i-1))/2;
//         // if (((i*i)+(i-1)*(i-1))%2 != 0) {
//         //     midp ++;
//         // }
//         // cout << midp <<"\n";
//         if (midp < y-x) {
//             cout << 2*i -1;
//         }
//         else {
//             cout << 2*(i-1);
//         }
//         cout<<"\n";
        
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
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n, x, y, ans, k;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        scanf("%d %d", &x, &y);
        ans = 0;
        k = 1;
        for(;;k++) {
            if (y-x < k*k) {
                break;
            }
        }
        // cout << k <<"\n";
        if (y-x == (k-1)*(k-1)) {
            ans = 2*(k-1)-1;
        }
        else if (y-x <=(k*k+(k-1)*(k-1))/2) {
            ans = 2*k-2;
        }
        else {
            ans = 2*k-1;
        }
        printf("%d\n", ans);

    }

    return 0;
}

