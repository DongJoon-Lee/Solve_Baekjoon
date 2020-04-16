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

double T, N, D, v, f, c,cou;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i = 0; i < T; i ++) {
        cin >> N >> D;
        cou=0;
        for(int j = 0; j < N;j ++) {
            cin >> v >> f >> c;
            if (v*(f/c) >= D) {
                cou ++;
            }
        }
        cout << cou <<"\n";
    }
}