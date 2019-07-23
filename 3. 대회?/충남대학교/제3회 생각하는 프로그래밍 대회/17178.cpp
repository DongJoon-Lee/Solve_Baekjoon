# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stack>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N;
char alp, gar;
int num;

//생각해보니 백터 배열이 아닌 그냥 백터로 쭉 이어도 괜찮았다..

int main (void) {
    cin >> N;
    vector <pair < char , int > > v, vans;
    stack <pair < char, int > > s;

    for(int i = 0; i < N*5; i ++) {
        cin >> alp >> gar >> num;
        v.pb(mp(alp, num));
    }

    vans = v;
    sort(vans.begin(), vans.end());

    int count = 0;
    int vidx=0;
    while(vidx != N*5) {
        if (v[vidx] == vans[count]) {
            count++;
            vidx++;
        }
        else if (!s.empty()) {
            if (s.top() == vans[count]) {
                s.pop();
                count++;
            }
            else {
                s.push(v[vidx]);
                vidx++;
            }
        }
        else {
            s.push(v[vidx]);
            vidx++;
        }
    }

    if (!s.empty()) {
        while(!s.empty()) {
            if (vans[count] == s.top()) {
                s.pop();
                count++;
            }
            else {
                break;
            }
        }
        if (!s.empty()) {
            cout << "BAD\n";
            return 0;
        }
    }
    cout << "GOOD\n";
    return 0;
    // cout << count <<" " << s.empty() << "\n";

}