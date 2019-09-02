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

int N, n, m, cou;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++) {
        cin >> n >> m;
        cou=0;
        for(int j = 2; j < n; j ++) {
            for(int k = 1; k < j;k++) {
                if ((k*k+j*j+m)%(k*j)==0) {
                    cou ++;
                }
            }
        }
        cout << cou<<"\n";
    }
    return 0;
}