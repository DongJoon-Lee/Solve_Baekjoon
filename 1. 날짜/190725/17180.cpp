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

int N, M;
string n1 = "";
string m1 = "";
// int tok = 0;
char tmp;
int ans=0;


//중복되는걸 지워볼까?
int main (void) {
    cin >> N >> M;
    for(int i = 0; i < N; i ++) {
        if (i == 0) {
            cin >> tmp;
            n1 += tmp;
        }
        else {
            cin >> tmp;
            if (n1.at(n1.size()-1) == tmp) {
                continue;
            }
            else {
                n1+= tmp;
            }
        }
    }
    // tok=0;
    for(int i = 0; i < M; i ++) {
        if (i == 0) {
            cin >> tmp;
            m1 += tmp;
        }
        else {
            cin >> tmp;
            if (m1.at(m1.size()-1) == tmp) {
                continue;
            }
            else {
                m1+= tmp;
            }
        }
    }
    // 테스트
    // for(int i = 0; i < n1.size(); i ++) {
    //     cout << n1[i];
    // }
    // cout << "\n";
    // for(int i = 0; i < m1.size(); i ++) {
    //     cout << m1[i];
    // }
    // cout << "\n";
    //테스트 종료

    if (n1.size() == m1.size()) {
        for(int i = 0; i < n1.size(); i ++) {
            ans += abs(n1[i]-m1[i]);
        }
        cout << ans << "\n";
    }
    else {
        int idx=0, idx2=1;
        int len;
        if (n1.size() < m1.size()) {
            ans+= abs(m1.at(0)-n1.at(0));
            len = n1.size();
            for(int i = 1; i < m1.size(); i ++) {
                // cout << ans << "\n";
                // cout << idx << " " << idx2 << "\n";
                // if (len == m1.size()) {
                //     break;
                // }
                if (abs(n1.at(idx) - m1.at(i))<abs(n1.at(idx2) - m1.at(i))) {
                    // cout << m1.at(i) << "\n";
                    ans+= abs(n1.at(idx) - m1.at(i));
                    len++;
                }
                else if (abs(n1.at(idx2) - m1.at(i)) <abs(n1.at(idx) - m1.at(i))) {
                    // cout << m1.at(i) << "\n";
                    ans += abs(n1.at(idx2) - m1.at(i));
                    idx++;
                    idx2++;
                }

            }
        }
        else {
            ans+= abs(m1.at(0)-n1.at(0));
            len = m1.size();
            for(int i = 1; i < n1.size(); i ++) {
                // cout << ans << "\n";
                if (abs(m1.at(idx) - n1.at(i)) < abs(m1.at(idx2) - n1.at(i))) {
                    // cout << n1.at(i) << "\n";
                    ans += abs(m1.at(idx) - n1.at(i));
                    len++;
                }
                else if (abs(m1.at(idx2) - n1.at(i)) <abs(m1.at(idx) - n1.at(i))) {
                    // cout << n1.at(i) << "\n";
                    ans += abs(m1.at(idx2) - n1.at(i));
                    idx++;
                    idx2++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

//apple
//bbpl

//aple
//blp