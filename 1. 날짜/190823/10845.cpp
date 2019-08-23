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

int N, tmp;
string str;
queue <int> q;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> str;
        if (str == "push") {
            cin >> tmp;
            q.push(tmp);
        }
        else {
            if (str == "pop") {
                if (q.empty()) {
                    cout << -1<<"\n";
                }
                else {
                    cout << q.front() << "\n";
                    q.pop();
                }
            }
            else if (str == "size") {
                cout << q.size() << "\n";
            }
            else if (str == "empty") {
                cout << q.empty() << "\n";
            }
            else if (str == "front") {
                if (q.empty()) {
                    cout << -1 << "\n";
                }
                else {
                    cout << q.front() << "\n";
                }
            }
            else if (str == "back") {
                if (q.empty()) {
                    cout << -1 <<"\n";
                }
                else {
                    cout << q.back() <<"\n";
                }
            }
        }
    }
}