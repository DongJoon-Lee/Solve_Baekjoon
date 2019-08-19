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

int N, n, tok = 1, ans1=0, ans_tmp;
string tmp;


int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> n;
        ans1 = 0;
        ans_tmp=1;
        vector <pair <string, int> > v;
        for(int i = 0; i < n; i ++) {
            cin >> tmp >> tmp;
            if (v.size() == 0) {
                v.pb(mp(tmp,1));
            }
            else {
                for(int i = 0; i < v.size(); i ++) {
                    if (tmp == v[i].first) {
                        v[i].second++;
                        tok = 0;
                        break;
                    }
                }
                if (tok == 1) {
                    v.pb(mp(tmp,1));
                }
                tok=1;
            }
        }
        for(int i =0 ; i < v.size(); i ++) {
            ans1 += v[i].second;
            ans_tmp*=v[i].second;
        }
        if (v.size() >1) {
            ans1 += ans_tmp;
        }
        
        cout << ans1 << "\n";
    }

}