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

queue <int> qx;
queue <int> qy;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    for(int i = 0; i < 3; i ++) {
        cin >> x >> y;
        if (qx.size() == 0 || qx.front() != x) {
            qx.push(x);
        }
        else {
            qx.pop();
        }

        if (qy.size() == 0 || qy.front() != y) {
            qy.push(y);
        }
        else {
            qy.pop();
        }
    }
    x = qx.front();
    y = qy.front();
    cout << x << " " << y << "\n";
}