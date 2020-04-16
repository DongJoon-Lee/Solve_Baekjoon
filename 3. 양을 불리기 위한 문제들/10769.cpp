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
int happy=0, sad=0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    getline(cin,str);
    for(int i = 2; i < str.size(); i ++) {
        if (str.at(i) == ')') {
            if (str.at(i-1) == '-') {
                if (str.at(i-2) == ':') {
                    happy ++;
                }
            }
        }
        else if (str.at(i) == '(') {
            if (str.at(i-1) == '-') {
                if (str.at(i-2) == ':') {
                    sad ++;
                }
            }
        }
    }
    if (happy == sad) {
        if (happy != 0) {
            cout << "unsure\n";
        }
        else {
            cout <<"none\n";
        }
    }
    
    else {
        if (happy < sad) {
            cout << "sad\n";
        }
        else {
            cout << "happy\n";
        }
    }
    return 0;
}