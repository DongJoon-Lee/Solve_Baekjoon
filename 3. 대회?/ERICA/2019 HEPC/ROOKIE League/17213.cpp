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

//중복조합이구나..

int N, M;
int n, r;
int main (void) {
    cin >> N >> M;
    M -= N;
    n = N + M - 1;
    if (M ==0) {
        cout << 1 <<"\n";
    }
    else {
        if (n-M < M) {
            r = n-M;
        }
        else{
            r = M;
        }
        ll ansa=1, ansb=1;
        for(int i = n; i > n-r; i --) {
            ansa*= i;
        }
        for(int i = r; i > 0; i --) {
            ansb *= i;
        }
        cout << ansa/ansb << "\n";
    }
    
    return 0;

}