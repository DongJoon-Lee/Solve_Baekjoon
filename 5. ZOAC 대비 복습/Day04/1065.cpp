# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int num, ans = 0;

void ansf(int num) {
    string nums;
    
    for(int i = 1; i <= num; i ++) {
        int a= 10, tok = 1;
        nums= to_string(i);
        for(int j = 1; j < nums.length(); j ++) {
            if (a == 10) {
                a = nums[j-1] - nums[j];
            }
            else {
                if (nums[j-1] - nums[j] != a) {
                    tok = 0;
                    break;
                }
                a = nums[j-1]  - nums[j];
            }
        }
        if(tok == 1) {
            ans ++;
        }
    }
}

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    ansf(a);
    cout << ans<<"\n";

    return 0;
}
