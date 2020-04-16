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

long sum(std::vector<int> &a) {
    ll ans = 0;
    for(int i = 0; i < a.size(); i ++) {
        ans += a[i];
    }
    return ans;
}