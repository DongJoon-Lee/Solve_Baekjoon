# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

string str, str1, str2;
int tok = 1;
int tok2 = 0;

string cal(string str) {
    string strans;
    if (str.at(str.size()-1) != 'x') {
        if (str != "1" && str != "-1") {
            strans+=str;
        }
        if (str == "-1") {
            strans+="-";
        }
        strans+='x';
    }
    else {
        int a=0, b;
        if (str.at(0) != '-') {
            b = str.size()-2;
            while(0<=b) {
                a += (str.at(str.size()-2-b)-48)*pow(10,b);
                b--;
            }
            a /= 2;
            if (a != 1) {
                strans+= to_string(a);
            }
        }
        else {
            b = str.size()-3;
            strans+="-";
            while(0<=b) {
                a += (str.at(str.size()-2-b)-48)*pow(10,b);
                b--;
            }
            a /= 2;
            if (a != 1) {
                strans+= to_string(a);
            }

        }

        
        strans+="xx";
    }
    return strans;
}

int main (void) {
    cin >> str;
    for(int i = 0; i < str.size(); i ++) {
        if (i == 0 && str.at(i)=='-') {
            str1+=str.at(i);
            continue;
        }
        if (str.at(i) == '+'||str.at(i)=='-') {
            if (str.at(i) == '-') {
                tok2 = 1;
            }
            tok = 0;
            continue;
        }
        if (tok) {
            str1 += str.at(i);
        }
        else {
            str2 += str.at(i);
        }
    }

    if (str2.size() != 0 && tok2 == 0) {
        if (str2 == "0") {
            cout << cal(str1) <<"+W\n";
        }
        else {
            cout << cal(str1) << "+" << cal(str2) << "+W\n";
        }
    }
    else if (str2.size() != 0 && tok2 == 1) {
        if (str2 == "0") {
            cout << cal(str1) <<"+W\n";
        }
        else {
            cout << cal(str1) << "-" << cal(str2) << "+W\n";
        }
        
    }
    else {
        if (str1 == "0" || str1 == "-0") {
            cout << "W\n";
        }
        else {
            cout << cal(str1) <<"+W\n";

        }
    }
    return 0;
}