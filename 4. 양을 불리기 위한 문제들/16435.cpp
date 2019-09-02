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

int N, L, tmp;
priority_queue <int, vector<int>, greater<int>> pq;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> L;
    for(int i = 0; i < N; i ++) {
        cin >> tmp;
        pq.push(tmp);
    }

    while(pq.top() <= L) {
        L++;
        pq.pop();
        if(pq.empty()) {
            break;
        }
    }
    cout << L << "\n";
    return 0;
}