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

ll a=0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i ++) {
        if (str[i] <= 'C') {
            a += 3;
        }
        else if (str[i] <= 'F') {
            a += 4;
        }
        else if (str[i] <= 'I') {
            a += 5;
        }
        else if (str[i] <= 'L') {
            a += 6;
        }
        else if (str[i] <= 'O') {
            a += 7;
        }
        else if (str[i] <= 'S') {
            a += 8;
        }
        else if (str[i] <= 'V') {
            a += 9;
        }
        else {
            a += 10;
        }
    }
    cout << a<<"\n";

    return 0;
}
