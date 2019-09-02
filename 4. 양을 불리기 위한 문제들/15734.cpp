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

int L, R, A, ret = 0;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> L >> R >> A;
    while(A != 0) {
        if (L < R) {
            L ++;
            A--;
        }
        else if (R<L) {
            R ++;
            A--;
        }
        else {
            if(A %2==0) {
                L++;
                R++;
                A-=2;
            }
            else {
                if (A != 1) {
                    L++;
                    R++;
                    A-=2;
                }
                else {
                    break;
                }
            }
        }
        
    }
    cout << 2*min(L,R)<<"\n";
    
}