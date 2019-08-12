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
int st=0;

int main (void) {
    while(1) {
        cin >> a >> b;
        if (a == 0) {
            break;
        }
        if (b%a==0) {
            st = 1;
        }
        else if (a%b == 0) {
            st = 2;
        }
        else {
            st = 3;
        }
        switch(st) {
            case 1 :
            cout << "factor\n";
            break;
            case 2 :
            cout << "multiple\n";
            break;
            case 3 :
            cout << "neither\n";
            break;
        }

    }
    return 0;
}