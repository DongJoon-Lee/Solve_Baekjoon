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

// 단순히 큐를 사용하는 문제일까?

int N, K, cou, tmp;
queue <int> q;
vector <int> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for(int i = 1; i <= N; i ++) {
        q.push(i);
    }
    while(q.size() != 1) {
        cou = 1;
        while (cou < K) {
            tmp = q.front();
            q.push(tmp);
            q.pop();
            cou++;
        }
        tmp = q.front();
        q.pop();
        v.pb(tmp);
    }
    cout << "<";
    for(int i = 0; i <v.size(); i ++) {
        cout << v[i];
        cout <<", ";
    }
    cout << q.front();
    cout << ">\n";
    return 0;
}