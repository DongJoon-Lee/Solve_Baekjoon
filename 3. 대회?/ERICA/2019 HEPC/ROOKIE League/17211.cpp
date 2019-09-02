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

int N,K;
double save[101][2];
double stat[2][2];

int main (void) {
    cin >> N >> K;
    if (K==1) {
        save[0][1]=1;
        save[0][0]=0;
    }
    else {
        save[0][0]=1;
        save[0][1]=0;
    }
    for(int i = 0; i < 2; i ++) {
        for(int j = 0; j < 2; j ++) {
            cin >> stat[i][j];
        }
    }
    int j = 1;
    while(j<=N) {
        save[j][0] = save[j-1][0]*stat[0][0] + save[j-1][1]*stat[1][0];
        save[j][1] = save[j-1][0]*stat[0][1] + save[j-1][1]*stat[1][1];
        j++;
    }
    save[j-1][0]*=1000;
    save[j-1][1]*=1000;

    cout << roundf(save[j-1][0]) <<"\n" << roundf(save[j-1][1])<<"\n";
    // printf("%.0lf\n%.0lf\n", save[j-1][0], save[j-1][1]);
    return 0;
}