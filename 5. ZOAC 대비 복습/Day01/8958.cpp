# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string str;
    int tok=0, cou=0;
    cin >> N;
    for(int i = 0;i < N; i ++) {
        cin >> str;
        for(int j = 0; j < str.length(); j ++) {
            if (str[j] == 'O') {
                cou += tok + 1;
                tok += 1;
            }
            else {
                tok = 0;
            }
        }
        cout << cou<<"\n";
        tok=0; cou=0;
    }

    return 0;
}
