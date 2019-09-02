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

int N, len1,len2;
string name;
vector<pair<string, pair<int,int>>> v;

int main (void) {
    while(1) {
        cin >> N;
        if (N == 0) {
            break;
        }
        for(int i = 0; i < N; i ++) {
            cin >> name;
            scanf("%d.%d", &len1, &len2);
            v.pb(mp(name, mp(i, -(len1*100+len2))));
        }
    }
}