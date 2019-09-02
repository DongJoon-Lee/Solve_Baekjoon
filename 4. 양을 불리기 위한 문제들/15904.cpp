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

string str;
string ucpc = "UCPC";
int idx = 0;
int tok = 0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    getline(cin, str);
    for(int i = 0; i < str.size(); i ++) {
        if (idx == 4) {
            break;
        }
        else if (ucpc.at(idx) == str.at(i)) {
            idx++;
        }
    }
    
    if (tok==1|| idx == 4) {
        cout << "I love UCPC\n";
    }
    else {
        cout << "I hate UCPC\n";
    }
}