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

vector <int> v;
int ans = 0;
int a, b;

void dfs(int pos, int cou, int sum) {
    if (cou == 3) {
        if (sum <= b) {
            ans = max(sum, ans);
        }
        return;
    }
    if (sum > b || pos == a) {
        return ;
    }
    dfs(pos+1, cou+1, sum+v[pos]);
    dfs(pos+1, cou, sum);
    

}

int main (void) {
    cin >> a>> b;
    v = vector<int> (a,0);

    for(int i = 0; i < a; i ++) {
        scanf("%d", &v[i]);
    }
    dfs(0,0,0);
    cout << ans << "\n";

}