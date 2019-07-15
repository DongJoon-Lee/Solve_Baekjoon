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

vector <int> v;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int min, max;
    cin >> min >> max;
    int n[max+1] = {0};
    n[1] = 1;
    for(int i = 2; i <= max; i ++) {
        for(int j = 2; j*i <= max; j ++) {
            n[i*j] = 1;
        }
    }
    for(int i = min; i <= max; i ++) {
        if (!(n[i])) {
            cout << i << "\n";
        }
    }
    
}