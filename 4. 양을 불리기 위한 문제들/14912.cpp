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

int n, d, ret=0;
string str;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> d;

    for(int i = 1; i <= n; i++) {
        str= to_string(i);
        for(int j = 0; j < str.size();j ++) {
            if (str.at(j)-48 == d) {
                ret ++;
            }
        }
    }
    cout << ret<<"\n";

}