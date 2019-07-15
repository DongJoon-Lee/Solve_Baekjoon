# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

vector<int> v(10002, -1);


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int n_10000;
    int n_1000;
    int n_100;
    int n_10;
    int n_1;
    for(int i = 1; i < 10001; i ++) {
        n= i;
        while(n < 10001) {
            n_10000 = n/10000;
            n_1000 = n/1000 - n_10000*10;
            n_100 = n/100 - n/1000*10;
            n_10 = n/10 - n/100 * 10;
            n_1 = n%10;
            // cout<<n<<"\n";
            n += n_10000 + n_1000 + n_100 + n_10 + n_1;
            // cout<<n<<"\n";
            if (n < 10000) {
                v[n] = 0;
            }
        }
    }
    for(int i = 1; i < 10000; i++) {
        if (v[i] == -1) {
            cout << i << "\n";
        }
    }
}