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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1;i < N;i ++) {
        for(int j=1; j <= N-i;j ++) {
            cout <<" ";
        }
        for(int j = 1; j <= 2*i-1; j ++) {
            cout <<"*";
        }
        cout<<"\n";
    }
    for(int i = 1; i <= N; i ++) {
        for(int j = 1; j < i;j ++) {
            cout <<" ";
        }
        for(int j = 1; j <= 2*N-(i*2-1); j ++) {
            cout <<"*";
        }
        cout<<"\n";
    }
}