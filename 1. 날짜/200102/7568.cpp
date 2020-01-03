# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

vector <pair <int, pair <int, int> > > v;
int N, tmp1, tmp2;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cin >> tmp1 >> tmp2;
        v.pb(mp(1, mp(tmp1, tmp2)));
    }
    for(int i = 0;i < N; i ++) {
        for(int j = 0; j < N;j ++) {
            if (v[i].second.first > v[j].second.first && v[i].second.second > v[j].second.second) {
                 v[j].first ++;
            }
        }
    }
    for(int i = 0;i < v.size(); i ++) {
        cout <<v[i].first<<" ";
    }
    cout <<"\n";



    return 0;
}
