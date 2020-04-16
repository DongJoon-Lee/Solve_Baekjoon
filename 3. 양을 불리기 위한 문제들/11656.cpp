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

string str;
vector<string> v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    v.pb(str);
    for(int i = 1; i <str.size(); i ++) {
        string tmp;
        for(int j = i; j < str.size(); j ++) {
            tmp += str.at(j);
        }
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size();i  ++) {
        cout << v[i]<<"\n";
    }
    return 0;
}