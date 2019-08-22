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

char str[102];
char ch, ch2;
stack <char> sSmall;
stack <char> sBig;
int tok = 1, tok2;

int main (void) {
    while(1) {
        if(!tok) {
            ch2 = ch;
        }
        if (ch == 32) {
            cout << "여기";
            ch2 = 0;
        }
        cin >> ch;
        tok2 = 0;
        tok=0;
        if (ch2 == '.' && ch2 == ch) {
            break;
        }
        else {
            if (ch == '(') {
                sSmall.push(ch);
            }
            else if (ch == '[') {
                sBig.push(ch);
            }
            else if (ch == ')') {
                if(sSmall.empty()) {
                    tok2 = 1;
                }
                else {
                    sSmall.pop();
                }
            }
            else if (ch == ']') {
                if(sBig.empty()) {
                    tok2 = 1;
                }
                else {
                    sBig.pop();
                }
            }
            if (ch == '.') {
                if (!sSmall.empty() || !sBig.empty()) {
                    cout << "no\n";
                }
                else {
                    cout << "yes\n";
                }
                while(!sSmall.empty()) {
                        sSmall.pop();
                    }
                while(!sBig.empty()) {
                    sBig.pop();
                }
            }
        }
    }

}