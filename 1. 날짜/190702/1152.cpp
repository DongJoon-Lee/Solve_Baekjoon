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


int main (void) {char word[1000001];
    int len = 0, ans = 0;
    scanf("%[^\n]", word);
    for(int i = 0; i < 1000001; i ++) {
        if (word[i] == '\0') {
            break;
        }
        len ++;
    }
    for(int i = 1; i < len-1; i ++) {
        if (!(65 <= word[i]&& word[i] <= 90 || 97<= word[i] && word[i] <= 122)) {
            ans++;
        }

    }
    if (1 < len) {
        ans++;
    }
    cout << ans << "\n";
}