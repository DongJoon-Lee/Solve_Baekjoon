# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;

vector <int> v;

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main (void) {
    int a;
    int m, n, x, y ,max, count, ans;
    cin >> a;
    while(a) {
        count = -1;
        cin >> m >> n >> x >> y;
        ans = -1;
        max = m*n/findGCD(m,n);
        // cout<<max<<"\n";
        // if (m > n) {
        //     max = m*n/findGCD(m,n); 
        // }
        // else {
        //     max = m*n/findGCD(m,n); 
        // }
        while( m*count+x <=max) {
            count++;
            // cout<<(m*count+x)%n<<"\n";
            if ((m*count+x)%n == y || (m*count+x)%n == 0) {
                if ((m*count + x)%n == 0) {
                    if (y != n) {
                        continue;
                    }
                }
                ans = m*count+x;
                break;
            }
            
        }
        cout<<ans<<"\n";
        a--;
    }
}