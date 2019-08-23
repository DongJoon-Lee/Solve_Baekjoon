# include <string>
# include <iostream>
# include <vector>
# include <queue> // push pop front back empty size
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
int tmp, tok;
queue <int> q;

//틀렸다.. 홀수와 짝수를 나눠볼까?


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    if(N == 1) {
        cout << 1<<"\n";
    }
    else {
        for(int i = 2; i <= N; i +=2) {
            q.push(i);
        }
        if (N%2==0) { // N이 짝수인 경우 -> 2부터 버려야 된다.
           tok = 1;
        }
        else {
            tok = 0;
        }
        while(q.size() != 1) {
            if (tok) {
                tok=0;
                q.pop();
            }
            else {
                tok=1;
                tmp = q.front();
                q.push(tmp);
                q.pop();
            }
        }
        cout << q.front()<<"\n";
    }
    
}