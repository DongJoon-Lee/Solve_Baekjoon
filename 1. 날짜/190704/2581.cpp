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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int min, max;
    cin >> min >> max;
    int tok = 1,sum=0;
    for(int i = min; i < max+1; i ++) {
        tok = 1;
        for(int j = 2; j < i; j ++) {
            if (i % j == 0) {
                tok = -1;
            }
        }
        if (tok == 1 && i != 1) {
            v.push_back(i);
            sum += i;
        }
    }
    if (v.size() != 0) {
    cout << sum << "\n" << v[0] << "\n";
    }
    else {
        cout << "-1" << "\n";
    }
    
}