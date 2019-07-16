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

int N, an = MIN;
int b[501][501];
int ans[501][501];

int main (void) {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < i+1; j ++) {
            cin >> b[i][j];
        }
    }
    ans[0][0] = b[0][0];
    for(int i = 1; i < N; i ++) {
        for(int j = 0; j < i+1; j ++) {
            if (j == 0) {
                ans[i][j] = ans[i-1][j] + b[i][j];
            }
            else if (j == i) {
                ans[i][j] = ans[i-1][j-1] + b[i][j];
            }
            else {
                ans[i][j] = max(ans[i-1][j], ans[i-1][j-1])+b[i][j];
            }
            if (i == N-1) {
                if (an < ans[i][j]) {
                    an = ans[i][j];
                }
            }
        }
        
    }
    cout << an << "\n";
}