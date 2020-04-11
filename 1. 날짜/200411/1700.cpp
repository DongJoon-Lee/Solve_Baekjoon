# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <cmath>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int N, K, ans = 0, tok;


int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    vector <int> v(K+2);
    vector <int> cou(K+2, 0);
    vector <int> con(N, 0);
    // fill_n(con, N, 0);
    // fill_n(cou, K+2, 0);
    // fill_n(v, K+2, 0);
    for(int i = 0; i < K; i ++) {
        cin >> v[i];
        cou[v[i]]++;
    }
    //이미 con에 있다면
    //  --;
    //만약 비어있는 칸이 있다면
    //  집어넣기 - sort
    //비어있는 칸이 없다면
    //  만약 다 쓴 콘센트가 있다면
    //    빼고 집어넣기 - sort
    //  다 쓴 콘센트가 없다면
    //    내 번호 기준으로 가장 마지막에 사용할 번호 뽑고 집어넣기 - sort
    for(int i = 0; i < K; i ++) {
        tok = 0;
        for(int j = 0; j < N; j ++) {
            // cout << "여기" <<"\n";
            if (con[j] == v[i]) {
                cou[v[i]] --;
                tok = 1;
            }
        }
        if (!tok) {
            if (con[0] == 0) {
                con[0] = v[i];
                cou[v[i]] --;
                sort(con.begin(), con.end());
            }
            else {
                tok = 0;
                for(int j = 0; j < N; j ++) {
                    if (cou[con[j]] == 0) {
                        ans ++;
                        con[j] = v[i];
                        cou[v[i]] --;
                        sort(con.begin(), con.end());
                        tok = 1;
                        break;
                    }
                }
                if (!tok) {
                    int tmp = MIN;
                    bool chk[K+2];
                    fill_n(chk, K+2, false);
                    int tmp2 = 0;
                    for(int j = i + 1; j < K; j ++) {
                        for(int k = 0; k < N; k ++) {
                            if (v[j] == con[k] && tmp != k && chk[v[j]] == false) {
                                tmp = k;
                                chk[v[j]] = true;
                                tmp2 ++;
                                break;
                            }
                        }
                        if (tmp2 == N) {
                            break;
                        }
                    }
                    
                    ans++;
                    con[tmp] = v[i];
                    cou[v[i]] --;
                    sort(con.begin(), con.end());
                }
            }
        }
        
        // for(int i = 0; i < N; i ++) {
        //     cout << con[i] <<"\n";
        // }
        // cout << ans <<"\n";
        // cout <<"\n";
    }
    cout << ans <<"\n";

    return 0;
}

/* 테스트 케이스

2 7

2 3 2 3 1 2 7



: 2



2 13

2 3 1 3 1 3 1 3 2 2 2 2 2



: 2



2 15

3 2 1 2 1 2 1 2 1 3 3 3 3 3 3



: 2



3 8

1 2 3 4 1 1 1 2



: 1



1 3

1 2 1



: 2



3 6

1 2 3 4 1 2



: 1



6 7

1 1 1 1 1 1 2



: 0



2 10

1 2 3 2 3 2 2 2 1 2



: 2



5 20

1 2 3 4 1 1 1 3 3 2 5 7 20 1 3 4 2 1 9 19



: 4

3 20

1 2 3 4 4 3 5 8 9 19 20 1 2 3 20 4 1 2 3 4



: 10



3 10

2 3 1 4 2 3 2 4 1 4



: 2



출처: https://stack07142.tistory.com/91 [Hello World]

맞왜틀 상태였는데, 이 테스트 케이스들을 보고 해결했습니다. 감사합니다.
*/
