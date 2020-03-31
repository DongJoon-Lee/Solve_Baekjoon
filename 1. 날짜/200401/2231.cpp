# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int ans;
int tmp;

void cal(int a) {
    tmp = a;
    while(a != 0) {
        tmp += a%10;
        a/= 10;
    }
    // cout << tmp <<"   Å×½ºÆ®\n";
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> ans;
    for(int i = 1; i <= ans; i ++) {
        cal(i);
        if (ans == tmp) {
            cout << i<<"\n";
            break;
        }
    }
    if (tmp > ans) {
        cout << 0 <<"\n";

    }

    return 0;
}