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

string str1;
string str2;
int int1=0, int2=0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> str1 >>str2;
    int1 += (str1[2]-48)*100;
    int2 += (str2[2]-48)*100;
    int1 += (str1[1]-48)*10;
    int2 += (str2[1]-48)*10;
    int1 += (str1[0]-48);
    int2 += (str2[0]-48);
    if(int1 > int2) {
        cout << int1 <<"\n";
    }
    else {
        cout << int2 <<"\n";
    }

    return 0;
}
