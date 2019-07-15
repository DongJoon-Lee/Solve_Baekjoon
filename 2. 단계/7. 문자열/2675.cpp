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
    int b;
    char word[22];
    for(int i = 0; i < a; i ++) {
        cin >> b >> word;
        for(int j = 0; j < 22; j ++) {
            if (45 <= (int)word[j] && (int)word[j] <= 58 || 65 <= (int)word[j] && (int)word[j] <= 90 ||(int)word[j] == 92 ||(int)word[j] == 36 ||(int)word[j] == 37 ||(int)word[j] == 42 ||(int)word[j] == 43) {
                for(int k = 0; k < b; k ++) {
                    cout<<word[j];
                }
            }
            else {
                break;
            }
        }
        cout<<"\n";
    }
}