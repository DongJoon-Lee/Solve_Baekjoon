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

vector <pair<pair<int, int>, int> > v;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int b, c;
    int a;
    cin >> a;
    while(a--) {
        cin >> b >> c;
        v.push_back(make_pair(make_pair(b, c), 1));
    }
    for(int i = 0; i < v.size(); i ++) {
        for(int j = 0; j < v.size(); j ++) {
            if (v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second) {
                v[i].second ++;
            }
        }   
    }
    for(int i = 0; i < v.size(); i ++) {
        cout << v[i].second << " ";
    }
    cout << "\n";
}