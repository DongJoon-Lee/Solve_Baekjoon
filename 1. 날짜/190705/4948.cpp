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
    int ans[123456*2+1] = {0};
    ans[1] = 1;
    for(int i = 2; i < 123456*2+1; i ++) {
        for(int j = 2; i*j < 123456*2 + 1; j ++) {
            ans[i*j] = 1;
        }
    }
    int a = 1, count;
    cin >> a;
    while(a) {
        count = 0;
        for(int i = a+1; i <= a*2; i ++) {
            if (!ans[i]) {
                count ++;
            }
        }
        cout << count <<"\n";
        cin >> a;
    }
}