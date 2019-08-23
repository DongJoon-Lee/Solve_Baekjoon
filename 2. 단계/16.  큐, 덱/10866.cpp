# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <deque>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
string str;
int num, tmp;

deque <int> deq;

// 덱(deque)에 대해 처음 알게되었다.
// 좀 복잡한 것 같기도.. 계속 써봐야 알 것 같다. 다른 친구들과 다르게 가리키는 함수들도 있다? 원래 다 있는건가

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> str;
        if (str == "push_front" || str == "push_back") {
            cin >> num;
            if (str == "push_front") {
                deq.push_front(num);
            }
            else {
                deq.push_back(num);
            }
        }
        else {
            if (str == "pop_front") {
                if (deq.empty()) {
                    cout << -1 << "\n";
                }
                else {
                    tmp = deq.front();
                    deq.pop_front();
                    cout << tmp << "\n";
                }
            }
            else if (str == "pop_back") {
                if (deq.empty()) {
                    cout << -1 << "\n";
                }
                else {
                    tmp = deq.back();
                    deq.pop_back();
                    cout <<tmp << "\n";
                }
            }
            else if (str == "size") {
                cout << deq.size() << "\n";
            }
            else if (str == "empty") {
                if (deq.empty()) {
                    cout << 1 << "\n";
                }
                else {
                    cout << 0 << "\n";
                }
            }
            else if (str == "front") {
                if (deq.empty()) {
                    cout << -1 << "\n";
                }
                else {
                    cout << deq.front() << "\n";
                }
            }
            else if (str == "back") {
                if (deq.empty()) {
                    cout << -1 << "\n";
                }
                else {
                    cout <<deq.back() << "\n";
                }
            }
        }
    }
}