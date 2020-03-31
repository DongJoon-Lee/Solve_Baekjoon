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

int n, cou;
vector <string> v;
string tmp1;
int tmp2, tmp3;

void strike() {
    
    for(int i = 0; i < v.size(); i ++) {
        cou = 0;
        if (v[i][0] == tmp1[0]) {
            cou ++;
        }
        if (v[i][1] == tmp1[1]) {
            cou ++;
        }
        if(v[i][2] == tmp1[2]) {
            cou ++;
        }
        if (cou != tmp2) {
            v[i] = "";
        }
    }
}

void ball() {
    for(int i = 0; i < v.size(); i ++) {
        cou = 0;
        if (v[i][1] == tmp1[0] || v[i][2] == tmp1[0]) {
            cou ++;
        }
        if (v[i][0] == tmp1[1] || v[i][2] == tmp1[1]) {
            cou ++;
        }
        if (v[i][0] == tmp1[2] || v[i][1] == tmp1[2]) {
            cou ++;
        }
        if (cou != tmp3) {
            v[i] = "";
        }
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 120; i < 990; i ++) {
        tmp1 = to_string(i);
        if (to_string(i)[0] != '0' && to_string(i)[1] != '0' && to_string(i)[2] != '0') {
            if (tmp1[0] != tmp1[1] && tmp1[1] != tmp1[2] && tmp1[0] != tmp1[2]) {
                v.pb(tmp1);
            }
        }
    }
    // cout << v.size()<<"\n\n";

    cin >> n;

    for(int i = 0; i < n; i ++) {
        cin >> tmp1 >> tmp2 >> tmp3;
        strike();
        ball();
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        // cout << v.size()<<"\n\n";
        
    }
    // for(int j = 0; j < v.size(); j ++) {
    //     if ()
    //         cout << v[j] <<"\n";
    //     }
    cou = v.size();
    for(int i = 0; i < v.size(); i ++) {
        if (v[i] == "") {
            cou --;
            break;
        }
    }
    cout << cou <<"\n";


    return 0;
}