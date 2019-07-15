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
// int a, tok = 0, min = MAX;
// double b;
// vector <int> v;
// vector <pair < int, int > > v2;

// int main (void) {
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);
//     cin >> a;
//     for(int i = 0; i < a; i ++) {
//         cin >> b;
//         v.push_back(b);
//         if (v2.size() == 0) {
//             v2.push_back(make_pair(b,1));
//         }
//         else {
//             tok = 0;
//             for(int j = 0; j <v2.size(); j ++) {
//                 if (b == v2[j].first) {
//                     v2[j].second ++;
//                     tok = 1;
//                 }
//             }
//             if (tok == 0) {
//                 v2.push_back(make_pair(b,1));
//             }

//         }
        
//     }
//     sort(v.begin(), v.end());
//     b = 0;
//     for(int i = 0; i < a; i ++) {
//         b += v[i];
//     }



//     printf("%.0lf\n%d",b/a, v[a/2]);


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
vector <pair < int, int > > v;
double b;
int a;
int c;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    for(int i = 0; i < a; i ++) {
        if (!(v.size())) {
            cin >> c;
            v.push_back(make_pair(c, 1));      
        }
        else {
            
        }
    }
}