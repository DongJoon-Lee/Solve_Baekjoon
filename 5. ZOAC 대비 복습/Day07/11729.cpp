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

void cal(int n, int first, int end, int mid) {
    if (n == 1) {
        cout << first <<" "<< end<<"\n";
    }
    else {
        cal(n-1, first, mid, end);
        cout <<first <<" "<< end<<"\n";
        cal(n-1, mid, end, first);
    }
}

int n;
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int sum = 1;
    for(int i = 1; i < n; i ++) {
        sum = sum*2 + 1;
    }
    cout << sum<<"\n";
    cal(n, 1, 3, 2);

    return 0;
}

// 3

// 1  3 1에서 2로, mid는 3
// 1  2
// 3  2
// //1  3
// 2  1 2에서 3으로, mid는 1
// 2  3
// 1  3

// 4

// 1  2  1에서 2로, mid는 3
// 1  3
// 2  3
// 1  2
// 3  1
// 3  2
// 2  1
// // 1  3

// 3 1 3 2

// 2 1 2 3
// 1 1 3 2
// 1 -> 1 3

// 3 1 3 2
// 2 1 2 3
// 1 -> 3
// 2 2 3 1

// 2 1 2 3
// 1 1 3 2
// 1 -> 2
// 1 3 1 2

// 4 1 3 2
// 3 1 2 3
// 1 -> 3
// 3 2 3 1


// 3 1 2 3
// 2 1 3 2
// 1 -> 2
// 2 3 2 1

// 2 1 3 2
// 1 1 2 3
// 1 -> 3
// 1 2 1 3

// if (n ==1 ) {
//     cout << first <<"->"<<end;
// }
// else {
//     cal(n-1, first, end, second);
//     cout << first <<"->"<<end;
//     cal(n-1, end, second, first);
// }

// 3
// 7

// 4
// 15
// 5
// 31