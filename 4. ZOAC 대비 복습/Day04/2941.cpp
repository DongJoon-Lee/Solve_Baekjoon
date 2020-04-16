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

string str;
int cou = 0;

void alp(string str) {
    cou = str.length();
    for(int i = 1; i < str.length(); i ++) {
        if (i == 1) {
            if((str[i] == '=' && str[i-1] == 'c')||(str[i] =='-' && str[i-1] == 'c')||(str[i] == '-' && str[i-1] == 'd')||(str[i]=='j' && str[i-1]=='l')||(str[i]=='j'&&str[i-1]=='n')||(str[i]=='='&&str[i-1]=='s')||(str[i]=='='&&str[i-1]=='z')) {
                cou --;
            }
        }
        else {
            if (str[i] == '=' && str[i-1] == 'z' && str[i-2] == 'd') {
                cou -= 2;
            }
            else if((str[i] == '=' && str[i-1] == 'c')||(str[i] =='-' && str[i-1] == 'c')||(str[i] == '-' && str[i-1] == 'd')||(str[i]=='j' && str[i-1]=='l')||(str[i]=='j'&&str[i-1]=='n')||(str[i]=='='&&str[i-1]=='s')||(str[i]=='='&&str[i-1]=='z')) {
                cou --;
            }
            
            
        }
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    alp(str);
    cout << cou <<"\n";

    return 0;
}
