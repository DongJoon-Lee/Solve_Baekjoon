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

vector <int> v(26, 0);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, ans = 0, tok = 0, point = 0;
    string word;
    cin >> a;
    for(int i = 0; i < a; i ++) {
        vector <int> v(26, 0);
        cin >> word;
        for(int j = 0; j < word.length(); j ++) {
            // point = word.at(j) - 97;
            if (v[word.at(j)-97]!= 0 && word.at(j-1) != word.at(j)) {
                tok = 1;
            } 
            else {
                v[word.at(j)-97] ++;
            }
        }
        if (tok == 1) {
            tok = 0;
            continue;
        }
        ans ++;
    }
    cout << ans << "\n";
}