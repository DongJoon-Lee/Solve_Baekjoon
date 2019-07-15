# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

int ans = 0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin >> c;
    int i_100;
    int i_10;
    int i_1;
    for(int i = 1; i < c+1; i ++) {
        if (i < 100) {
            ans++;
        }
        else {
            i_100 = i/100;
            i_10 = i/10 - i/100*10;
            i_1 = i%10;
            if((i_100 - i_10) == (i_10 - i_1)) {
                ans ++;
            }
        }
    }
    cout << ans << "\n";
}