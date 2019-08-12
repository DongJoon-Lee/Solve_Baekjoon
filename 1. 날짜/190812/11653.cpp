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

int k;

int main (void) {
    cin >> k;
    // if (k == 1) {
    //     cout << 1 << "\n";
    //     return 0;
    // }
    for(int i = 2; i*i <= k; i++) {
        while(k%i == 0) {
            cout << i << "\n";
            k/=i;
        }
    }
    if (k > 1) {
        cout << k << "\n";
    }
    
    
    return 0;
}