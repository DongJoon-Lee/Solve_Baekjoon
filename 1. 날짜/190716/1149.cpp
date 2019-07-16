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

int b[1001][3];
int ans[1001][3];
int main (void) {
    int N;
    cin >>N;
    for(int i = 0; i < N; i ++) {
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }
    for(int i = 0; i < 3; i ++) {
        ans[0][i] = b[0][i];
    }
    for(int i = 1; i < N; i ++) {
        ans[i][0] = min(ans[i-1][1], ans[i-1][2]) + b[i][0];
        ans[i][1] = min(ans[i-1][0], ans[i-1][2]) + b[i][1];
        ans[i][2] = min(ans[i-1][0], ans[i-1][1]) + b[i][2];
    }
    cout << min(min(ans[N-1][0], ans[N-1][1]), ans[N-1][2]) << "\n";

}