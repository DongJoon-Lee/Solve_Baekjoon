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

string sen;
string spl[52];
int gal=1; // 식의 시작을 1로 설정
int save[52][52];

int cal(int a, int b) {
    if (a == b) {
        save[a][b] = atoi(spl[a].c_str());
        return save[a][b];
    }
    else if (save[a][b] != MAX) {
        return save[a][b]; 
    }
    else if (b - a == 2) {
        if (spl[a+1] == "+") {
            save[a][b] = atoi(spl[a].c_str()) + atoi(spl[b].c_str());
        }
        else {
            save[a][b] = atoi(spl[a].c_str()) - atoi(spl[b].c_str());
        }
        return save[a][b];
    }
    else {
        for(int i = a+1; i < b; i +=2) {
            if (spl[i] == "+") {
                save[a][b] = min(save[a][b], cal(a, i-1)+ cal(i+1, b));
            }
            else {
                save[a][b] = min(save[a][b], cal(a, i-1)- cal(i+1, b));
            }
        }
        return save[a][b];
    }
}


int main (void) {
    cin >> sen;
    for(int i = 0; i < 52; i ++) {
        fill_n(save[i], 52, MAX);
    }
    for(int i = 0; i < sen.size(); i ++) {
        if(sen.at(i) == '+' ||sen.at(i) == '-') {
            gal++;
            spl[gal] += sen.at(i);
            gal++;
        }
        else {
            spl[gal] += sen.at(i);
        }
    }
    // cout << gal;
    cout << cal(1, gal) << "\n";
    // for(int i = 1; i <= 5; i ++) {
    //     for(int j = 1; j <= 5; j ++) {
    //         cout << save[i][j] << "  ";
    //     }
    //     cout << "\n";
    // }
}