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

int N;
char ch;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i ++) {
        string str;
        getline(cin, str);
        
        int cou = 0, idx = 0;
        for(int j = 0; j < str.size(); j ++) {
            if (str.at(j) == ' ') {
                cou ++;
            }
            if (cou == 2) {
                idx = j;
                break;
            }
        }
        for(int j = idx+1; j < str.size(); j ++) {
            cout << str.at(j);
        }
        cout<<" ";
        for(int j = 0; j < idx; j ++) {
            cout << str.at(j);
        }
        cout <<"\n";
        
    }
    return 0;
}