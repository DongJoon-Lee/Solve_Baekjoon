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

    int a, b = 0, c = 0, ans;
    cin >> a;
    if (a == 4) {
        cout << -1 << "\n";
        return 0;
    }
    b = a / 5;
    while(0 <= b) {
        if ((a - 5 * b)%3 != 0) {
            b--;
            continue;
        }
        c = (a - 5 * b) / 3;
        cout <<b+c<<"\n";
        return 0;
    }
    cout << -1 << "\n";
}