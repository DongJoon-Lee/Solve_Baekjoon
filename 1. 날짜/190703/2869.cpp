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
    int a, b, c;
    cin >> a >> b >>c;
    float ans = (c-b)%(a-b);
    if (ans == 0) {
        cout << (c-b)/(a-b) << "\n";
    }
    else {
        cout << (c-b)/(a-b) + 1 << "\n";
    }

    // cout << (c-b)/(a-b)+1 << "\n";
}
