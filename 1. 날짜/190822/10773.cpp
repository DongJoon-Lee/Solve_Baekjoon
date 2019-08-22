# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stack> // push, pop, top
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int K, num;
stack <int> s;

int main (void) {
    cin >> K;
    for(int i = 0; i < K; i ++) {
        cin >> num;
        if (num != 0) {
            s.push(num);
        }
        else {
            s.pop();
        }
    }
    num = 0;
    for(int i = 0; !s.empty(); i ++) {
        num += s.top();
        s.pop();
    }
    cout << num << "\n";
    return 0;
}