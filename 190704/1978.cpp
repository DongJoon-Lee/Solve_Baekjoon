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

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    int b[a+1];
    int ans = a;
    for(int i = 0; i < a; i ++) {
        cin >> b[i];
        if (b[i] == 1) {
            ans --;
        }
        for(int j = 2; j < b[i]; j ++) {
            if (b[i]%j == 0) {
                // b[i] = 1;
                ans --;
                break;
            }
        }
        
    }
    // int ans = 0;
    cout << ans << "\n";
    // for(int i = 0; i < a; i ++) {
    //     if (b[i] != 1) {
    //         cout << ans << "\n";
    //     }
    // }
}