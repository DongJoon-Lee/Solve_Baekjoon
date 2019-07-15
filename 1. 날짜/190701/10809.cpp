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

vector <int> v(27, -1);

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char word[101];
    
    cin >> word;
    int len = 0;
    for(int i = 0; i < 101; i ++) {
        if (97 <= (int)word[i] && (int)word[i] <= 122) {
            len++;
        }
        else {
            break;
        }
    }
    for(int i = 0;i < len; i ++) {
        if (v[word[i]-97] == -1) {
            v[word[i]-97] = i;
        } 
    }
    for(int i = 0; i < 26; i ++) {
        cout << v[i] << " ";
    }
    cout<<"\n";

}