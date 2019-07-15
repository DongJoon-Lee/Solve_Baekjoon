# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stdlib.h>
# include <stdlib.h>
# include <cmath>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x1, y1, x2, y2, r1, r2;
    int a, dist;
    int ans;
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dist = sqrt(pow(abs(x2-x1),2) + pow(abs(y2-y1),2));
        if (x1 == x2 && y1 == y2 && r1 == r2) {
            ans = -1;
        }
        else if (abs(r1-r2) < dist && dist < abs(r1 + r2)) {
            ans = 2;
        }
        else if (r1 + r2 < dist) {
            ans = 0;
        }
        else if (dist < abs(r1-r2)) {
            ans = 0;
        }
        else if (dist == abs(r1-r2)) {
            ans = 1;
        }
        else if (dist == r1 + r2) {
            ans = 1;
        }
        cout << ans << "\n";
    }
    

}