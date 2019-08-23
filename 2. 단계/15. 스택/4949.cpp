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

stack <char> s;
int tok = 0; // 0이면 정답, 1이면 오답.
string str;
// getline이라는 함수를 처음 알게 되었다.. 대박

int main (void) {
    while(1) {
        getline(cin, str);
        tok = 0;
        if (str.size()==1) {
            break;
        }
        for(int i = 0; str.at(i) != '.'; i ++) {
            if (str.at(i) == '(') {
                s.push('(');
            }
            else if (str.at(i) == '[') {
                s.push('[');
            }
            else if (str.at(i) == ')' || str.at(i) == ']') {
                if (str.at(i) == ')') {
                    if (s.size() == 0) {
                        tok = 1;
                        break;
                    }
                    if (s.top() == '(') {
                        s.pop();
                        continue;
                    }
                    else {
                        tok = 1;
                        break;
                    }
                }
                else {
                    if (s.size() == 0) {
                        tok = 1;
                        break;
                    }
                    if (s.top() == '[') {
                        s.pop();
                        continue;
                    }
                    else {
                        tok = 1;
                        break;
                    }
                }
            }
        }
        if (!s.empty()) {
            tok=1;
        }
        while(!s.empty()) {
            s.pop();
        }
        if (tok) {
            cout << "no\n";
        }
        else {
            cout << "yes\n";
        }
        tok = 0;
    }
}