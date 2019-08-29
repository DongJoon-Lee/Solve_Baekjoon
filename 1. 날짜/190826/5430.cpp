// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <deque>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int T;

// int n;
// char tmp;
// int tmp2;


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     cin >> T;
//     for(int i = 0; i < T; i ++) {
//         char p[100002];
//         deque <int> deq;
//         cin >> p >> n;
//         while(1) {
//             cin >> tmp;
//             if (tmp != ']') {
                
//                 cin >> tmp2;
//                 if (!(1<=tmp2 && tmp2<=100)) {
//                     break;
//                 }
//                 deq.pb(tmp2);
//             }
//             else {
//                 break;
//             }
//         }
//         //입력받았음.
//         int tok = 0;

//         for(int j = 0; p[j] != 0; j ++) {
//             if (p[j] == 'R') {
//                 deque <int> tmpdeq;
//                 while(!deq.empty()) {
//                     tmpdeq.push_back(deq.front());
//                     deq.pop_front();
//                 }
//                 while(!tmpdeq.empty()) {
//                     deq.push_back(tmpdeq.back());
//                     tmpdeq.pop_back();
//                 }
//             }
//             else {
//                 if (deq.empty()) {
//                     tok = 1;
//                     break;
//                 }
//                 else {
//                     deq.pop_front();
//                 }
//             }
//         }
//         if (tok) {
//             cout << "error\n";
//         }
//         else {
//             cout << "[";
//             for(int j = 0; j < deq.size(); j ++) {
//                 cout << deq[j];
//                 if (j != deq.size()-1) {
//                     cout<<",";
//                 }
//             }
//             cout << "]\n";
//         }
        
//     }
// }


// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <deque>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int T;
// int n, first, back;
// char tmp;
// int tmp2;


// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     cin >> T;
//     for(int i = 0; i < T; i ++) {
//         char p[100002];
//         deque <int> deq;
//         cin >> p >> n;
//         while(1) {
//             cin >> tmp;
//             if (tmp != ']') {
                
//                 cin >> tmp2;
//                 if (!(1<=tmp2 && tmp2<=100)) {
//                     break;
//                 }
//                 deq.pb(tmp2);
//             }
//             else {
//                 break;
//             }
//         }
//         //입력받았음.
        
        
//         int tok = 0;
//         int loc = 0;
//         for(int j = 0; p[j] == 'D' || p[j] == 'R'; j ++) {
//             if (p[j] == 'R') {
//                 if (loc == 0) {
//                     loc = 1;
//                 }
//                 else {
//                     loc = 0;
//                 }
//             }
//             else {
//                 if (deq.empty()) {
//                     tok = 1;
//                     break;
//                 }
//                 else {
//                     if (loc == 0) {
//                         deq.pop_front();
//                     }
//                     else {
//                         deq.pop_back();
//                     }
//                 }
//             }

            
//         }
//         if (tok) {
//                 cout << "error\n";
//             }
//             else {
//                 cout << "[";
//                 if(loc) {
                    
//                     for(int j = deq.size()-1; 0<= j; j --) {
//                         cout << deq[j];
//                         if (j != 0) {
//                             cout << ",";
//                         }
//                     }
//                 }
//                 else {
//                     for(int j = 0; j < deq.size();j ++) {
//                         cout << deq[j];
//                         if (j != deq.size()-1) {
//                             cout << ",";
//                         }
//                     }
//                 }
//                 cout << "]\n";
//             }
        
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
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int T;
int n;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >>T;
    while(T--) {
        string p;
        cin >> p;
        cin >> n;
        string x;
        cin >> x;
        int tmp1=-1, tmp2=-1, tmp3=-1;
        deque <int> deq;
        for(int i = 0; i < x.size(); i ++) {
            if('0'<= x.at(i) && x.at(i) <= '9') {
                if (tmp1 == -1) {
                    tmp1 = x.at(i) - 48;
                }
                else if (tmp2 == -1) {
                    tmp2 = x.at(i) - 48;
                }
                else {
                    tmp3 = x.at(i) - 48;
                }
            }
            else if (x.at(i) == ',' || x.at(i) == ']') {
                if (tmp3 != -1) {
                    deq.pb(100);
                    tmp1=-1, tmp2=-1, tmp3=-1;
                }
                else if (tmp2 != -1) {
                    deq.pb(tmp1*10 + tmp2);
                    tmp1=-1, tmp2=-1, tmp3=-1;
                }
                else if(tmp1 != -1) {
                    deq.pb(tmp1);
                    tmp1=-1, tmp2=-1, tmp3=-1;
                }
            }
        }
        // cout <<x.size()<<"\n";
        // cout <<p.size()<<"\n";
        bool tok = 0;
        bool siz=0;
        for(int i = 0; i < p.size(); i ++) {
            if (p.at(i) == 'R') {
                tok = !tok;
            }
            else {
                if (deq.empty()) {
                    siz = 1;
                    break;
                }
                else {
                    if (tok == 0) {
                        deq.pop_front();
                    }
                    else {
                        deq.pop_back();
                    }
                }
            }
        }
        if (siz) {
            cout << "error";
        }
        else {
            cout << "[";
            if (tok == 0) {
                while(!deq.empty()) {
                    cout << deq.front();
                    if (deq.size() != 1) {
                        cout << ",";
                    }
                    deq.pop_front();
                }
            }
            else {
                while(!deq.empty()) {
                    cout << deq.back();
                    if (deq.size() != 1) {
                        cout << ",";
                    }
                    deq.pop_back();
                }
            }
            cout << "]";
        }
        cout <<"\n";

    }
    return 0;
}