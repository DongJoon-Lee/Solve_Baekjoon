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

int N, tmp1, tmp2;
vector <pair <int, int > > v; //first - 끝나는 시간 second - 시작하는 시간
int ret = 0;
int save=0;

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> tmp1 >> tmp2;
        v.pb(mp(tmp2, tmp1));  //   끝나는 시간을 주로 볼 것이므로 끝나는 시간 - 시작하는 시간으로 집어넣음
    }
    // 그런데 예제 입력은 끝나는 시간이 작은 순서대로 작성해줬다?!
    // 그래도 테스트 케이스는 그러지 않을 수 있으므로 정렬해준다.
    sort(v.begin(), v.end());
    // for(int i = 0; i < N; i ++) {
    //     cout << v[i].second << " " << v[i].first << "\n";
    // }
    for(int i = 0; i < v.size(); i ++) {
        if (i == 0) {
            ret ++;
            continue;
        }
        if (v[i].second < v[save].first) {
            continue;
        }
        save = i;
        ret++;
    }
    cout << ret << "\n";
}