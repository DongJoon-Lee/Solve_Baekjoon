# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stack>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int T, tok;
// stack <char> open;
string str;

int main (void) {
    cin >> T;
    for(int i = 0;i < T; i ++) {
        cin >> str;
        tok = 0;
        stack <char> open;
        // cout << str<< "\n";
        for(int j = 0; j < str.size(); j ++) {
            if (str.at(j) == '(') {
                open.push(str.at(j));
            }
            else {
                if (open.empty()) {
                    tok =1;
                    break;
                }
                else {
                    open.pop();
                }
            }
        }
        if (!open.empty()|| tok) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}