# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;
typedef long long ll;

const int MAX = 2147483647;
const int MIN = -2147483648;
int a,b;
int main (void) {
    scanf("%d", &a);
    vector <int> v(a+1);
    for(int i = 0;i < a;i ++) {
        scanf("%d", b);
        v[i] = b;
    }
    sort(v.begin(), v.end());
    for(int i = 0;i < a; i ++) {
        cout << v[i] << "\n";
    }
}