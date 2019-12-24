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

// int H, W, N, n;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> n;
//     for(int i = 0; i < n; i ++) {
//         cin >> H >> W >> N;
//         if (N%H == 0) {
//             cout<<H;
//             if (N/H<10) {
//                 cout <<"0"<<N/H<<"\n";
//             }
//             else {
//                 cout<<N/H<<"\n";
//             }
//         }
//         else{
//         cout << N%H;
//         if (N/H<10) {
//             cout <<"0"<<N/H+1<<"\n";
//         }
//         else {
//             cout<<N/H+1<<"\n";
//         }
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
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int n, H, W, N;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    scanf("%d", &n);//cin >> n;
    for(int i = 0; i < n; i ++) {
        scanf("%d %d %d", &H, &W, &N);
        if ((N-1)/H+1<10) {
            printf("%d0%d\n", (N-1)%H+1, (N-1)/H+1);
        }
        else {
            printf("%d%d\n", (N-1)%H+1, (N-1)/H+1);
        }
    }

    return 0;
}