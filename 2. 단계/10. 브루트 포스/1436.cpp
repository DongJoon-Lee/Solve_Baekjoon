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

int a;
int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    int b = 665;
    string c;
    while(a) {
        b++;
        c = to_string(b);
        for(int i = 0; i < c.size()-2; i ++) {
            if (c.at(i) == '6' && c.at(i+1) == '6' && c.at(i+2) == '6') {
                a--;
                break;
            } 
        }
    }
    cout << b <<"\n";
}