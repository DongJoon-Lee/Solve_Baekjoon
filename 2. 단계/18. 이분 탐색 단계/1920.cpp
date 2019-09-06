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

int N, M, tmp, idxs,idxe;
vector<int>v;

int cal(int);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    cin >> M;

    for(int i = 0; i < M; i++) {
        idxs=0, idxe=v.size()-1;
        cin >> tmp;
        cout<<cal(tmp)<<"\n";
    }
    return 0;
}

int cal(int n) {
    if(idxe <= idxs || v[idxe] < n || n < v[idxs]) {
        return 0;
    }
    int mid = (idxe+idxs)/2;
    if (v[mid] == n|| n == v[idxs] || n == v[idxe]) {
        return 1;
    }
    else {
        if (n < v[mid]) {
            idxe = mid-1;
        }
        else {
            idxs = mid + 1;
        }
        return cal(n);
    }
}