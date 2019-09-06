# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

ll A, B, C;

// A의 짝수(n) 거듭제곱 = A^(n/2)*A^(n/2)
// A의 홀수(n+1) 거듭제곱 = A^(n/2)*A^(n/2)*A
// 와 대박이다..

ll cal(ll,ll);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;
    cout << cal(A,B) <<"\n";

    return 0;
}

ll cal(ll a, ll b) {
    if (b==0) {
        return 1;
    }
    else {
        ll d = cal(a,b/2);
        ll t = d*d%C;
        if (b%2 == 0) {
            return t;
        }
        else {
            return t*a%C;
        }
    }
}