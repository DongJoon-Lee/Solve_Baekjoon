// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;
// typedef long long ll;

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int main (void) {
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);
//     int n;
//     int sc = 7;
//     cin >> n;
//     cout << n << "hi\n";
//     int count = 0;
//     while(!((count-1)*19 + 16+1 <= n&&n <= count*19 + 16)) {
//         count ++;
//     }
//     sc += 19*count;
//     if (sc <= n) {
//         if (count == 0) {
//             cout << "666" << (char)(n-sc+48) << "\n";
//         }
//         else {
//             cout << (char)(48+count) << "666" << (char)(n-sc+48) << "\n";
//         }
        
//     }
//     else {
//         cout << 666+(n-1-9*count )* 1000 << "\n";
//     }
//     cout <<count << "\n";
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

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int n = 0;
// vector <ll> v;

// queue <ll> q1;
// queue <ll> q2;
// queue <ll> q3;
// queue <ll> q4;

// int main (void) {
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);
//     n = 0;
//     int n2 = 0, n3 = 0, n4 = 0;
//     int c = 10;
//     q1.push(n*1000 + 666);
//     q2.push(666*c + n);
//     for(int i = 0; i < 10; i ++) {
//         q3.push(n*10000+6660+i);
//     }
//     for(int i = 0; i < 100; i ++) {
//         q4.push(n*100000 + 66600 + i);
//     }
//     ll thisone = min(min(q1.front(), q2.front()), min(q3.front(), q4.front()));
//     v.push_back(thisone);
//     if (thisone == q1.front()) {
//         q1.pop();
//     }
//     else if (thisone == q2.front()) {
//         q2.pop();
//     }
//     else if (thisone == q3.front()) {
//         q3.pop();
//     }
//     else if (thisone == q4.front()) {
//         q4.pop();
//     }
//     int thi = 9, thi2 = 10;
//     n++;
//     n2++;
//     n3++;
//     n4++;

//     while(v.size() < 10001) {
//         if (q1.size() == 0) {
//             q1.push(n*1000 + 666);
//             n++;
//         }
//         if (q2.size() ==0) {
//             q2.push(666*c + n2);
//             n2++;
//             if (n2 ==thi) {
//                 c*=10;
//                 thi = thi * 10 + 9;
//             }
//         }
//         if (q3.size() == 0) {
//             for(int i = 0; i < 10; i ++) {
//                 q3.push(n3*10000+6660+i);
//             }
//             n3++;
//         }
//         if (q4.size() == 0) {
//             for(int i = 0; i < 100; i ++) {
//                 q4.push(n4*100000 + 66600 + i);
//             }
//             n4++;

//         }
//         if (v[v.size()-1] == q1.front()) {
//             q1.pop();
//             continue;
//         }
//         if (v[v.size()-1] == q2.front()) {
//             q2.pop();
//             continue;
//         }
//         if (v[v.size()-1] == q3.front()) {
//             q3.pop();
//             continue;
//         }
//         if (v[v.size()-1] == q4.front()) {
//             q4.pop();
//             continue;
//         }
//         ll thisone = min(min(q1.front(), q2.front()), min(q3.front(), q4.front()));
//         v.push_back(thisone);
//         if (thisone  == v[v.size()-1]) {
//             if(thisone == q1.front()) {
//                 q1.pop();
//             }
//             else if(thisone == q2.front()) {
//                 q2.pop();
//             }
//             else if(thisone == q3.front()) {
//                 q3.pop();
//             }
//             else if(thisone == q4.front()) {
//                 q4.pop();
//             }
//             continue;
//         }
        
//         if (v.size() == thi2) {
//             thi2+=10;
//             sort(v.begin(), v.end());
//             v.erase(unique(v.begin(), v.end()), v.end());
            
//         }
//     }
//     // cin >> n;
//     // cout << v[n-1] << "\n";
//     for(int i = 1000; i < 1100; i ++) {
//         cout << v[i-1] << "\n";

//     }
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

const int MAX = 2147483647;
const int MIN = -2147483648;

int a;
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    string b = to_string(a);
    cout << b << "\n";
    cout << b.at(2) << "\n";
}