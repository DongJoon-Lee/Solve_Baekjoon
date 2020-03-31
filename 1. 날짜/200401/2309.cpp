# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

vector <int> v;
int chk[10];
int sum;
int tok;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 9; i ++) {
        cin >> sum;
        v.pb(sum);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < 8; i ++) {
        for(int j= i+1; j < 9; j ++) {
            sum = 0;
            tok = 0;
            fill_n(chk, 10, 0);
            for(int k = 0; k < 9; k ++) {
                if (k == i || k == j) {
                    continue;
                }
                else {
                    sum += v[k];
                    chk[k] = 1;
                }
            }
            if (sum == 100) {
                tok = 1;
                break;
            }
        }
        if (tok) {
            break;
        }
    }
    for(int i = 0; i < 9; i ++) {
        if (chk[i] == 1) {
            cout << v[i] <<"\n";
        }
    }

    return 0;
}