# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;

int main (void) {
    int area[42] = {0}, num, ans = 0;
    for(int i = 0; i < 10; i ++) {
        cin >> num;
        area[num%42] ++;
    }
    for(int i = 0; i < 42; i ++) {
        if (area[i] != 0) {
            ans ++;
        }
    }
    printf("%d\n", ans);
    return 0;    
}