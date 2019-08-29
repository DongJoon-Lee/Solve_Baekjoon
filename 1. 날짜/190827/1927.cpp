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

//priority queue가 정리되어있다니 stl이란 최고다.. 그 대신 멍청해질듯.
// vector<int>는 왜쓰지
// greater<int> 는 오름차순으로

int N, tmp;
priority_queue <int, vector<int>, greater<int>> q;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N;i ++) {
        cin >> tmp;
        if (tmp == 0) {
            if (q.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << q.top() << "\n";
                q.pop();
            }
        }
        else {
            q.push(tmp);
        }
    }
}