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
# define PI 3.141592

const int MAX = 2147483647;
const int MIN = -2147483648;

int d1, d2;

int main (void) {

    cin >> d1 >> d2;
    double ret;
    ret = 2*d1;
    ret += 2 * PI * d2;
    printf("%6lf\n", ret);
    return 0;
}