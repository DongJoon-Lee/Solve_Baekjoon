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
    string a, a2, b, b2;
    a2 = "";
    b2 = "";
    cin >> a >> b;

    for(int i = 0; i < a.length(); i ++) {
        a2 += a[a.length()-1-i];
        b2 += b[a.length()-1-i];
    }
    if (a2 < b2) {
        cout << b2 << "\n";
    }
    else {
        cout << a2 << "\n";
    }

}