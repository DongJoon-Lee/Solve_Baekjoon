# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cmath>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int a;
    cin >> a;
    ll x1, y1, r1, x2, y2, r2;
    
    while(a--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        ll dx = x1 - x2, dy = y1 - y2;
        if (r1 > r2) {
        swap(r1,r2);
        }
        ll add = r1 + r2;
        add *= add;
        ll sub = r1 - r2;
        sub *= sub;
        ll dist = dx*dx + dy*dy;

        if (sub < dist && dist < add) {
            cout << 2 << "\n";
        }
        else if (add == dist) {
            cout << 1 << "\n";
        }
        else if (sub == dist && dist != 0) {
            cout << 1 <<"\n";
        }
        else if (add < dist) {
            cout << 0 << "\n";
        }
        else if (dist < sub) {
            cout << 0 << "\n";
        }
        else if (dist == 0) {
            if (r1 == r2) {
                cout << -1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}