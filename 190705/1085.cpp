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

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << min(min(x,w-x),min(y,h-y)) << "\n";

}