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

int N;
int board[1502][1502];
priority_queue <pair<int, int> > pq;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 5; i ++) {
        cin >> N;
        pq.push(mp(N, i));
    }
    while(!pq.empty()) {
        cout << pq.top().first << pq.top().second << "\n";
        pq.pop();
    }


    return 0;

}