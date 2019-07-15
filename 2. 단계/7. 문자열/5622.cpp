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

    string word;
    cin >> word;
    int time = 0;
    for(int i = 0; i < word.length(); i ++) {
        if (65 <= word.at(i) && word.at(i) <= 67) {
            time += 3;
        }
        else if (68 <= word.at(i) && word.at(i) <= 70) {
            time += 4;
        }
        else if (71 <= word.at(i) && word.at(i) <= 73) {
            time += 5;
        }
        else if (74 <= word.at(i) && word.at(i) <= 76) {
            time += 6;
        }
        else if (77 <= word.at(i) && word.at(i) <= 79) {
            time += 7;
        }
        else if (80 <= word.at(i) && word.at(i) <= 83) {
            time += 8;
        }
        else if (84 <= word.at(i) && word.at(i) <= 86) {
            time += 9;
        }
        else if (87 <= word.at(i) && word.at(i) <= 90) {
            time += 10;
        }
        else if (43 == word.at(i) || 45 == word.at(i) || 42 == word.at(i) || 47 == word.at(i) || 37 == word.at(i)) {
            time += 11;
        }
        else {
            time += 2;
        }
        
    }
    cout << time << "\n";
}