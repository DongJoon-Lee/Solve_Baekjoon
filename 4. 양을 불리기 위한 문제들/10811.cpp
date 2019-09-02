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

int N, M, a, b;
vector<int> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1; i <= N; i ++) {
        v.pb(i);
    }
    for(int i = 1; i <= M; i ++) {
        cin >> a >> b;
        reverse(v.begin()+a-1, v.begin()+b);
    }
    for(int i = 0 ; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}