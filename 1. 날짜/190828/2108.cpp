// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// // 단계별로 풀어보기 단계 11. 정렬 4번 통계학(2108) 재채점 된 후 실패처리, 다시 풀기

// double N, tmp, sum;
// int tok, idx;
// vector <pair<int, int>> v;

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> N;
//     sum = 0;
//     for(int i = 0; i < N; i ++) {
//         cin >> tmp;
//         tok=0;
//         sum += tmp;
//         for(int j = 0; j < v.size(); j ++) {
//             if (v[j].first == tmp) {
//                 tok = 1;
//                 idx = j;
//                 break;
//             }
//         }
//         if(tok==1) {
//             v[idx].second ++;
//         }
//         else {
//             v.pb(mp(tmp,1));
//         }
//     }
//     sort(v.begin(), v.end());
//     double ans1, ans2, ans3, ans4;
//     ans1 = sum/N;
//     int tmp = N/2;
//     int tmp2=0;
//     for(int i = 0; i <v.size(); i ++) {
//         tmp2 += v[i].second;
//         if(tmp < tmp2) {
//             ans2 = v[i].first;
//             break;
//         }
//     }
//     ans4 = v[v.size()-1].first - v[0].first;
//     for(int i = 0; i <v.size(); i ++) {
//         int tmp;
//         tmp = v[i].first;
//         v[i].first = v[i].second;
//         v[i].second = tmp;
//     }
//     sort(v.begin(), v.end());
//     int count = 0;
//     count = v[v.size()-1].first;
//     for(int i = 0; i < v.size(); i ++) {
//         if (count == v[i].first) {
//             count = i;
//             break;
//         }
//     }
//     if (v.size() == 1 || count == v.size()-1) {
//         ans3 = v[count].second;
//     }
//     else {
//         ans3 = v[count+1].second;
//     }
    


    
//     //테스트
//     printf("%.0lf\n%.0lf\n%.0lf\n%.0lf\n", ans1, ans2, ans3, ans4);
    

// }

// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int N, tmp;
// vector <int> v;
// double ans1=0;
// int ans2, ans3, ans4;

// int main (void) {

//     scanf("%d", &N);
//     for(int i = 0;i < N; i ++) {
//         scanf("%d", &tmp);
//         v.pb(tmp);
//         ans1 += tmp;
//     }
//     sort(v.begin(), v.end());
//     ans1 /= N;
//     int tmp = N/2;
//     ans2 = v[tmp];
//     int tmp2=MAX, tmp3=MAX;
//     for(int i = 0;i < v.size(); i ++) {
//         if (i == 0) {
//             tmp2 = v[i];
//             tmp3=1;
//         }
//         else {
//             if ()
//         }
//     }
// }

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

int N, tmp, tok;
double ans1;
int ans2, ans3, ans4;
vector <int> v;
vector <pair<int, int> > v2;

int main (void) {
    scanf("%d", &N);
    if (N == 1) {
        scanf("%d", &tmp);
        printf("%d\n%d\n%d\n%d\n", tmp, tmp, tmp, 0);
    }
    else {
        for(int i = 0; i < N;i  ++) {
            scanf("%d", &tmp);
            ans1 += tmp;
            v.pb(tmp);
        }
        sort(v.begin(), v.end());
        ans1 /= N;
        ans2 = v[N/2];
        ans4 = v[v.size()-1] - v[0];
        v2.pb(mp(1, v[0]));
        for(int i = 1; i < v.size();i ++) {
            tok=0;
            for(int j = 0; j < v2.size(); j ++) {
                if (v[i] == v2[j].second) {
                    v2[j].first += 1;
                    tok = 1;
                    break;
                }
            }
            if (!tok) {
                v2.pb(mp(1, v[i]));
            }
        }
        sort(v2.begin(), v2.end());
        tmp = v2.size()-1;
        for(int i = 0; i < v2.size(); i ++) {
            if (v2[i].first == v2[tmp].first) {
                if (i != tmp) {
                    tmp = i;
                    break;
                }
                else {
                    tmp-=1;
                    break;
                }
            }
        }
        ans3 = v2[tmp+1].second;

        printf("%.0lf\n%d\n%d\n%d\n", ans1, ans2, ans3, ans4);
    }
    return 0;
}