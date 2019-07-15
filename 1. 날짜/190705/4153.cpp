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
    int maxn;
    cin >> a >>b >>c;
    while(a != 0) {
        maxn = max(max(a, b), c);
        if (maxn == a) {
            if (a*a == b*b + c*c) {
                cout << "right\n";
            }
            else {
                cout << "wrong\n";
            }
        }
        else if (maxn == b) {
            if (b*b == a*a + c*c) {
                cout << "right\n";
            }
            else {
                cout << "wrong\n";
            }
        }
        else {
            if (c*c == a*a + b*b) {
                cout << "right\n";
            }
            else {
                cout << "wrong\n";
            }
        }
        cin >> a >>b >>c;

    }
}