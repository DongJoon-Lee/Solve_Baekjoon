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

int n, k;
vector <int> v(10002,-1);
int save[10002];


int main (void) {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    fill_n(save, 10002, MAX);
    save[0]=0;
    // save[1]=1;
    // for(int i = 0; i < v.size(); i ++) {
    //     cout << v.size();
    //     cout<< v[i]<<"\n";
    // }
    for(int i = 1; i < v.size(); i ++) {
        for(int j = v[i]; j <= k; j ++) {
            save[j] = min(save[j], save[j-v[i]]+1);
        }
    }
    // for(int i = 1; i <= k; i ++) {
    //     cout << save[i] << "\n";
    // }
    cout << save[k] << "\n";
}