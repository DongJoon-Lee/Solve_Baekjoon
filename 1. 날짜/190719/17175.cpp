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

int n; 
ll cou = 0;
ll couFib[1001];


int main (void) {
    fill_n(couFib,1001, -1);
    cin >> n;
    couFib[1] = 1;
    couFib[0] = 1;
    for(int i = 2; i <= n; i ++) {
        couFib[i] = (couFib[i-1] + couFib[i-2] + 1)%1000000007;
    }
    cout << couFib[n] << "\n";

}