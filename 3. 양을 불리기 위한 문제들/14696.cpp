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

int N, C, num1, tmp;
int boarda[5], boardb[5];

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> N;
    for(int i = 1;i <= N;i ++) {
        fill_n(boarda,5,0);
        fill_n(boardb,5,0);
        cin >> num1;
        for(int j = 1; j <= num1; j ++) {
            cin >> tmp;
            boarda[tmp]++;
        }
        cin >> num1;
        for(int j = 1; j <= num1; j ++) {
            cin >> tmp;
            boardb[tmp]++;
        }
        int tok=1;
        for(int j = 4; 1<=j; j--) {
            if (boarda[j] > boardb[j]) {
                cout << "A\n";
                tok = 0;
                break;
            }
            else if (boarda[j]<boardb[j]) {
                cout <<"B\n";
                tok = 0;
                break;
            }
        }
        if (tok) {
            cout<<"D\n";
        }
    }
}