# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;

string s;
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s << "\n";

}