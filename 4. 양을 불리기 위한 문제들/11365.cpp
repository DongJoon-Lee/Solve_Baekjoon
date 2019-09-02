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

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(1) {
        getline(cin, str);
        if (str == "END") {
            break;
        }
        for(int i = 0; i < str.size(); i ++) {
            cout<<str.at(str.size()-1-i);
        }
        cout<<"\n";
    }
}