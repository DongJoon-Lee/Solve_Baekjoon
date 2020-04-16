# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;

int fibo(int N) {
    if (N == 0) {
        return 0;
    }
    else if (N == 1) {
        return 1;
    }
    else {
        ll k, k1=1, k2=0;
        for(int i = 2; i < N; i ++) {
            k = k1 + k2;
            k2 = k1;
            k1 = k;
        }
        k = k1 + k2;
        return k;
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    cout << fibo(N)<<"\n";

    return 0;
}
