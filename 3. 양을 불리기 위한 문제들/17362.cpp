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

ll n;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    n%=8;
    if(n == 1) {
        cout<< 1<<"\n";
    }
    else if (n == 2 || n == 0) {
        cout << 2<<"\n";
    }
    else if (n == 3 || n == 7) {
        cout << 3<<"\n";
    }
    else if (n == 4 || n == 6) {
        cout << 4<< "\n";
    }
    else if (n == 5) {
        cout<<5<<"\n";
    }
    return 0;
}