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

    int cou=0, tmp2;
    string N, tmp;
    cin >> N;
    tmp = N;
    if (N.length() == 1) {
        N = "0"+N;
    }
    do {
        if (tmp.length() == 1) {
            tmp = "0" + tmp;
        }
        tmp2 = tmp[0]-48 + tmp[1]-48;
        tmp = tmp[1] + to_string(tmp2%10);
        cou++;
    } while (tmp != N);
    cout<<cou<<"\n";


    return 0;
}
