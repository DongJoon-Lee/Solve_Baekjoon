# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    b -= 45;
    if (b < 0) {
        a -= 1;
        b += 60;
    }
    if (a < 0) {
        a += 24;
    }
    cout << a <<" " << b <<"\n";

    return 0;
}
