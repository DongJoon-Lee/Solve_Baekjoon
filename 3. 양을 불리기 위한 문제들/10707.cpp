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

int A, B, C, D, P, calA=0, calB=0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin >> A >>B>>C>>D>>P;
    calA = P*A;
    if (P<C) {
        calB = B;
    }
    else {
        calB += B;
        P-=C;
        calB+= D*P;
    }

    cout << min(calA,calB)<<"\n";
    return 0;
}