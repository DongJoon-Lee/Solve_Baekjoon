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

vector <int> v(26,0);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char word[1000001];
    int max=MIN;
    char max_ch;
    cin >> word;
    for(int i = 0; i < 1000001; i ++) {
        if (65 <= (int)word[i] && (int)word[i] <= 90) {
            v[(int)word[i]-65] ++;
        }
        else if (97 <= (int)word[i] && (int)word[i] <= 122) {
            v[(int)word[i]-97]++;
        }
        else {
            break;
        }
    }
    for(int i = 0 ; i < 26; i ++) {
        if (v[i] != 0 && max <=v[i]) {
            if (max == v[i]) {
                max_ch = '?';
            }
            else {
                max =v[i];
                max_ch = i+65;
            }
            
        }
    }

    cout <<max_ch<<"\n";
}