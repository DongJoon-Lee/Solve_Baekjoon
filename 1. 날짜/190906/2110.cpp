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

// 너무 어렵다. 인생 ㅜㅠ

int N, C, tmp, ret = 0;
vector <int> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> C;
    for(int i = 0;i < N;i ++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    int lens = 1, lene = v[N-1]-1;
    while(lens <= lene) {
        int count = 1;
        int mid = (lene+lens)/2;
        int sta = v[0];
        for(int i = 1; i < N; i ++) {
            if (mid <= v[i] - sta) {
                count ++;
                sta = v[i];
            }
        }
        if (C <= count) {
            ret = mid;
            lens = mid+1;
        }
        else {
            lene = mid - 1;
        }
    }
    cout << ret <<"\n";
    return 0;
}