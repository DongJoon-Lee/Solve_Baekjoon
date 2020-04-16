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

    int a;
    cin >> a;
    if (a >=90) {
        cout << "A\n";
    }
    else if (a >= 80) {
        cout <<"B\n";
    }
    else if (a >= 70) {
        cout <<"C\n";
    }
    else if (a >= 60) {
        cout <<"D\n";
    }
    else {
        cout <<"F\n";
    }

    return 0;
}
