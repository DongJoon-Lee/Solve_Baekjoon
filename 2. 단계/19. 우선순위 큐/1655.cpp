# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <deque>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, tmp;
int ret;
priority_queue<int> pqsmall; // pqsmall은 - 붙이고 넣고 - 붙이고 빼기
priority_queue <int, vector<int>, greater<int>> pqbig;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    int what = MAX;
    if (N < 3) {
        for(int i = 0; i < N; i ++) {
            cin >> tmp;
            if (what < tmp) {
                cout << what<<"\n";
            }
            else {
                what = tmp;
                cout << what<<"\n";
            }
        }   
        return 0;
    }
    cin >> ret;
    cout << ret << "\n";
    cin >> tmp;
    if (tmp < ret) {
        cout << tmp << "\n";
        pqsmall.push(tmp);
        pqbig.push(ret);
    }
    else {
        cout << ret << "\n";
        pqsmall.push(ret);
        pqbig.push(tmp);
    }
    for(int i = 2; i < N; i ++) {
        cin >> tmp;
        if (tmp <= pqsmall.top()) {
            pqsmall.push(tmp);
        }
        else {
            pqbig.push(tmp);
        }
        if (i %2 == 1) {
            while(pqsmall.size() != pqbig.size()) {
                if (pqsmall.size() < pqbig.size()) {
                    pqsmall.push(pqbig.top());
                    pqbig.pop();
                }
                else {
                    pqbig.push(pqsmall.top());
                    pqsmall.pop();
                }
            }
            // cout << pqsmall.top()<<"\n";
        }
        else {
            while(!(pqsmall.size() == 1 + pqbig.size())) {
                if (pqsmall.size() > pqbig.size()) {
                    pqbig.push(pqsmall.top());
                    pqsmall.pop();
                }
                else {
                    pqsmall.push(pqbig.top());
                    pqbig.pop();
                }
            }
        }
        cout << pqsmall.top()<<"\n";
        // cout <<"pqsmall    \n";
        // priority_queue<int> pqsmall2;
        // pqsmall2 = pqsmall;
        // while(!pqsmall2.empty()) {
        //     cout << pqsmall2.top() <<"\n";
        //     pqsmall2.pop();
        // }
        // cout <<"pqbig     \n";
        // priority_queue <int, vector<int>, greater<int>> pqsmall3;
        // pqsmall3 = pqbig;
        // while(!pqsmall3.empty()) {
        //     cout << pqsmall3.top()<<"\n";
        //     pqsmall3.pop();
        // }
        // cout <<"end\n";
    }

}