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

int N;
stack <int> s;
string str;
int num;

int main (void) {
    cin >>N;
    for(int i = 0; i < N; i ++) {
        cin >> str;
        if (str == "push") {
            cin >> num;
        }
        if (str=="push") {
            s.push(num);
        }
        else if (str == "pop") {
            if (s.empty()) {
                cout << -1<<"\n";
            }
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (str == "size") {
            cout << s.size()<<"\n";
        }
        else if (str == "empty") {
            cout << s.empty()<<"\n";
        }
        else if (str == "top") {
            if (s.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout <<s.top() << "\n";
            }
        }
    }
}