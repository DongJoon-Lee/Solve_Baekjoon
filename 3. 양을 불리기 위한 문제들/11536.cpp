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

int N, tok=1;
string tmp;
vector<string> v;
vector<string> vans;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cin >> tmp;
        v.pb(tmp);
        vans.pb(tmp);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i ++) {
        if (v[i] != vans[i]) {
            tok = 0;
            break;
        }
    }
    if (tok) {
        cout << "INCREASING\n";
    }
    else {
        tok=1;
        for(int i = 0; i < v.size(); i ++) {
            if (v[v.size()-1-i] != vans[i]) {
                tok = 0;
                break;
            }
        }
        if (tok) {
            cout << "DECREASING\n";
        }
        else {
            cout<<"NEITHER\n";
        }
    }
}