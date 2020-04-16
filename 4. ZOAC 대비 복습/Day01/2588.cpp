# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    string b;
    cin >> a >> b;
    cout << a*(b[2]-48)<<"\n"<<a*(b[1]-48)<<"\n"<<a*(b[0]-48)<<"\n"<<a*stoi(b)<<"\n";

    return 0;
}
