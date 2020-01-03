# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, tmp = 665, cou = 0;
string str;

void cal() {
    while(cou != N) {
        tmp++;
        str = to_string(tmp);
        for(int i = str.length()-1; i >=2 ; i --) {
            if (str[i] == '6' && str[i-1] == '6' && str[i-2] == '6') {
                cou ++;
                break;
            }
        }
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    cal();
    cout << tmp <<"\n";
    


    return 0;
}
