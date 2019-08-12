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

int k, tmp;
vector <int> v;

int main (void) {
    cin >> k;
    for(int i = 0; i < k ;i ++) {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    if (k == 1) {
        cout << v[0] * v[0];
    }
    else {
        cout << v[0]*v[k-1];
    }
    cout << "\n";
    
    return 0;
}