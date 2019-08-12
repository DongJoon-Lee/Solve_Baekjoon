# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int a, b;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int main (void) {
    cin >> a >>b;
    cout << gcd(a, b) << "\n" << gcd(a, b) * a/gcd(a, b) *b/gcd(a, b) << "\n";
}