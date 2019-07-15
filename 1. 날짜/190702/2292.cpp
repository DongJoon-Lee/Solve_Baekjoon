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

    int a, num = 1, ans = 1;
    cin >>a;
    int min = 2, max = 7;
    if (a == 1) {
        cout << num << "\n";
    }
    else {
        while(!(min <= a && a <= max)) {
            min = max+1;
            num++;
            max = min + 6 * num -1;
        }
        cout << num+1 << "\n";
    }
    
}