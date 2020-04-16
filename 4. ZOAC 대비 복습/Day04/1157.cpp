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

vector <pair<int, int> > v;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    for(int i = 1; i <= 26; i ++) {
        v.pb(mp(0,i));
    }
    string str;
    cin >> str;
    int max = 0;
    for(int i = 0; i <str.length(); i ++) {
        if (str[i] <= 'Z') {
            v[str[i]-65].first++;
        }
        else {
            v[str[i]-97].first++;
        }
    }
    sort(v.begin(), v.end());
    if (v[24].first == v[25].first) {
        cout << "?\n";
    }
    else {
        printf("%c\n", v[25].second+64);
    }


    //a 97
    //A 65
}
