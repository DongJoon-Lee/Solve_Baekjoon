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

int main (void) {
    //피보나치
    //시간초과 발생..
    cin >> N;
    int a=0, b=1, c;
    for(int i = 1; i <= N; i++) {
        c = (a+b)%15746;
        a=b;
        b=c;
    }
    cout << c << "\n";
}