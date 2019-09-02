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

int T, N;
char tmp;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i < T; i ++) {
        vector<char> v;
        cin >> N;
        for(int j = 0; j < N; j ++) {
            cin >> tmp;
            v.pb(tmp);
        }
        deque <char> deq;
        for(int j = 0; j < N; j ++) {
            if (j == 0) {
                deq.pb(v[0]);
            }
            else {
                if (v[j] > deq.front()) {
                    deq.pb(v[j]);
                }
                else {
                    deq.push_front(v[j]);
                }
            }
        }
        for(int j = 0; j < N; j ++) {
            cout << deq.front();
            deq.pop_front();
        }
        cout<<"\n";
    }
}