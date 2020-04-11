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

priority_queue <pair<int, int>, vector<pair< int, int> >, greater<pair<int, int> > > pq;
int D, V, ans=0, keep = 0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 11; i ++) {
        cin >> D >> V;
        pq.push(mp(D, V));
    }

    while(!pq.empty()) {
        keep += pq.top().first;
        ans += keep + 20*pq.top().second;
        pq.pop();
    }
    cout << ans <<"\n";


    return 0;
}