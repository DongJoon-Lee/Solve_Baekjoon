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

int A, B, V;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> V;
    if((V-A)%(A-B) != 0) {
        cout << 2 + (V-A)/(A-B)<<"\n";
    }
    else {
        cout << 1 + (V-A)/(A-B)<<"\n";
    }

    return 0;
}