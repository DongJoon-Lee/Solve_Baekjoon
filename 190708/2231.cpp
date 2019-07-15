# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stdlib.h>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;

int inp;
/*
백만 = a/1000000
십만 = (a/100000)%10
만 = (a/10000)%10
천 = (a/1000)%10
백 = (a/100)%10s
십 = (a/10)%10
일 = a%10
 */

bool sam(int a, int b) {
    int tok = 1, an = b;
    while(b/tok) {
        an += (b/tok)%10;
        tok*=10;
    }
    if (an == a) {
        return 1;
    }
    else {
        return 0;
    }
}

int ans(int a) {
    int b = 1, c = 0;
    while(b < a) {
        if (sam(a, b)) {
            c = b;
            break;
        }
        b++;
    }
    return c;

}


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> inp;
    cout << ans(inp) << "\n";
    
}