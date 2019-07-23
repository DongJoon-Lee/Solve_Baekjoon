# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <stack>
# include<cmath>

using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

// 스택을 사용하는 문제
int N;

string tmp;
int tmp2;
stack <pair < char, int> > s;
string ret = "GOOD";

int main (void) {
    cin >> N;
    queue <pair <char, int> > q[N+1];
    vector <pair < char, int> > ans;

    for(int i = 0; i < N; i ++) {
        for(int j = 0; j <5; j ++) {
            cin >> tmp;
            tmp2 = 0;
            for(int i = 2; i < (int)tmp.size(); i ++) {
                tmp2 += (tmp.at(i)-48)*pow(10,tmp.size()-i-1);
            }
            q[i].push(mp(tmp.at(0), tmp2));
            ans.pb(mp(tmp.at(0), tmp2));
        }
    }
    sort(ans.begin(), ans.end());

    int count = 0, h = 0;
    while(count < ans.size()) {
        if (q[h].empty()) {
            h++;
            if (h == N) {
                ret = "BAD";
                break;
            }
            
        }
        if (s.empty()) {
            s.push(q[h].front());
            q[h].pop();
        }
        if (q[h].front() == ans[count]) {
            q[h].pop();
            count++;
            continue;
        }
        else if (s.top() == ans[count]) {
            s.pop();
            count++;
            continue;
        }
        else {
            if (q[h].empty()) {
                if (h == N-1) {
                    ret = "BAD";
                    break;
                }
                else {
                    continue;
                }
            }
            else {
                s.push(q[h].front());
                q[h].pop();
            }
        }
    }
    
    cout << ret << "\n";
}