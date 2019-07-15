# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <math.h>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

int ans(int x, int y) {
    int dist = y - x;
    float dist_sqrt = ceil(sqrt(y-x));
    int maxdist = dist_sqrt * dist_sqrt;
    int maxnum = dist_sqrt*2-1;
    if (dist <= maxdist-dist_sqrt) {
        return maxnum-1;
    }
    else {
        return maxnum;
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, x, y;
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> x >> y;
        cout << ans(x,y) << "\n";
    }
}