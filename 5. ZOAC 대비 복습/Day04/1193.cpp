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

// int N;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     // cin >> N;
//     // if(N == 1) {
//     //     cout <<"1/1\n";
//     //     return 0;
//     // }
//     // else {
//     //     int a = 3, sum = 3;
//     //     while(!(N<=sum)) {
//     //         sum += a;
//     //         a ++;
//     //     }
//     //     cout << N <<" " << a <<" " << sum <<"\n";
//     //     cout << (sum-N)+1<<"/"<<a-(sum-N)-1<<"\n";
//     // }
//     for(int N= 1; N <= 100; N ++) {
//         if(N == 1) {
//         cout <<"1/1\n";
//         // return 0;
//     }
//     else {
//         int a = 3, sum = 3;
//         while(!(N<=sum)) {
//             sum += a;
//             a ++;
//         }
//         cout << N <<" " << a <<" " << sum <<"\n";
//         cout << (sum-N)+1<<"/"<<a-(sum-N)-1<<"\n";
//     }
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

int N;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    if (N == 1) {
        cout <<"1/1\n";
        return 0;
    }
    int a = 1, sum = 0;
    while(!(N <= sum)) {
        sum += a;
        a ++;
    }
    // cout << N <<" "<< a <<" "<< sum <<"\n";
    if (a%2 == 0) {
        cout << sum-N+1 <<"/"<<a-(sum-N+1)<<"\n";
    }
    else {
        cout <<a - (sum-N+1)<<"/"<<sum-N+1<<"\n";
    }

    return 0;
}
