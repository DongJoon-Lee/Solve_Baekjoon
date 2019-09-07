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

int N, M, tmps, tmpe, ret=0;
vector <int> v[102];
bool chk[102];

void cal(int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 0; i < M; i ++) {
        cin >> tmps >> tmpe;
        v[tmps].pb(tmpe);
        v[tmpe].pb(tmps);
    }
    cal(1);
    cout<<ret<<"\n";
    return 0;

}

void cal(int a) {
    queue <int> q;
    chk[1] = true;
    for(int i = 0; i < v[a].size();i ++) {
        q.push(v[a][i]);
    }
    while(!q.empty()) {
        tmps = q.front();
        q.pop();
        if (chk[tmps] != true) {
            ret ++;
            chk[tmps] = true;
        }
        for(int i = 0; i < v[tmps].size(); i ++) {
            if (chk[v[tmps][i]] != true) {
                q.push(v[tmps][i]);
            }
        }

    }
}