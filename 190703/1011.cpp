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
int ans(int dist) {
    int min = 1, max = 0, ans, min_val, max_val;
    while(1) {
        max= min+1;
        min_val = min * min;
        max_val = max * max;
        if (dist == 1) {
            return 1;
        }
        if (min_val < dist && dist <= max_val) {
            if (dist <= min * max) {
                dist = 2 * min;
            }
            else {
                dist = 2 * min + 1;
            }
            break;
        }
        min++;
    }
    return dist;
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b ,c;
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> b >> c;
        v.push_back(ans(c-b));
        cout << v[i] << "\n";
    }
    
}