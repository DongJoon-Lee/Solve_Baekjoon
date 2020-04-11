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

int N;
int tmp1, tmp2;
vector <pair <int, int > > v;
priority_queue <int, vector <int>, greater <int> > pq;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0 ; i < N; i ++) {
        cin >> tmp1 >> tmp2;
        v.pb(mp(tmp1, tmp2));
    }

    sort(v.begin(), v.end());
    pq.push(v[0].second);
    for(int i = 1; i < v.size(); i ++) {
        if (pq.top() <= v[i].first) {
            pq.push(v[i].second);
            pq.pop();
        }
        else {
            pq.push(v[i].second);
        }
    }
    cout << pq.size() <<"\n";

    return 0;
}
