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

int a, b, tmp;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(1) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        vector <int> v;
        if ((a+b)%2==0) {
            tmp = (a+b)/2;
            v.pb(tmp);
        }
        v.pb(2*a-b);
        v.pb(2*b-a);
        sort(v.begin(), v.end());
        cout << v[0]<<"\n";
    }
    return 0;
}