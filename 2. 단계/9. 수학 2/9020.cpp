// # include <string>
# include <iostream>
// # include <vector>
// # include <queue>
# include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
using namespace std;

// const int MAX = 2147483647;
// const int MIN = -2147483648;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int ans[10001] = {0};
    int a, b, c;
    ans[1] = 1;
    for(int i = 2; i < 10001; i ++) {
        for(int j = 2; i*j < 10001; j ++) {
            ans[i*j] = 1;
        }
    }

    cin >> a;
    // a = 4999;
    // b = 4;
    for(int i = 0; i < a; i ++) {
        cin >> b;
        // cout << b << "\n";
        
        c = b/2;
        while(c) {
            if (ans[c] == 0 && ans[b-c] == 0) {
                printf("%d %d\n", c, b-c);
                // cout << c << " " << b-c << "\n";
                break;
            }
            c--;
        }
    }

}


// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int ans[5001]={0};
//     ans[1] = 1;
//     for(int i = 2; i < 5001; i ++) {
//         for(int j = 2; i*j < 5001; j ++) {
//             ans[i*j] = 1;
//             cout << "hey" << "\n";
//         }
//     }
//     int a, b, c;

//     cin >> a;
//     cout << "hey" << "\n";
//     // cin >> b;
//     c = b/2;
//     while(c) {
//         if (ans[c] == 0 && ans[b-c] == 0) {
//             cout << c << " " << b-c << "\n";
//         c--;
//         }
//     }



//     for(int i = 0; i < a; i ++) {
//         cout << "hey" << "\n";
//         cin >> b;
//         c = b/2;
//         while(c) {
//             if (ans[c] == 0 && ans[b-c] == 0) {
//                 cout << c << " " << b-c << "\n";
//             c--;
//             }
//         }
//     }

// }