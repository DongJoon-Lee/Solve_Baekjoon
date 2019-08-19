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

// 수학은 너무 어렵다.
// 식을 만들어내는 과정까지 생각하기 힘든 것 같다,,ㅜㅠ
int N, n, tok, ret;
string tmp;


int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> n;
        if (n == 0) {
            cout << 0 << "\n";
            continue;
        }
        vector < pair < string, int > > v;
        for(int j = 0; j < n; j ++) {
            cin >> tmp >> tmp;
            tok=1;
            ret = 1;
            if (!v.size()) {
                v.pb(mp(tmp,1));
            }
            else {
                for(int k = 0; k < v.size(); k ++) {
                    if (v[k].first == tmp) {
                        v[k].second ++;
                        tok = 0;
                        break;
                    }
                }
                if (tok) {
                    v.pb(mp(tmp,1));
                }
            }
        }
        for(int j = 0; j < v.size(); j ++) {
            ret *= (v[j].second+1);
        }
        ret --;
        cout << ret << "\n";
    }
    return 0;
}