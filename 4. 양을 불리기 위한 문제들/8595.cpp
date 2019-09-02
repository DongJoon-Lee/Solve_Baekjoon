// # include <string>
// # include <iostream>
// # include <vector>
// # include <queue>
// # include <stdio.h>
// # include <algorithm>
// # include <ctype.h>
// # include <cmath>
// using namespace std;
// typedef long long ll;
// # define pb push_back
// # define mp make_pair

// const int MAX = 2147483647;
// const int MIN = -2147483648;

// int n, ret=0;
// string str, str2="";

// int main (void) {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> n;
//     cin >> str;
//     for(int i = 0; i < str.size(); i++) {
//         if (str.at(i)<= '9' && '0' <= str.at(i)) {
//             str2+=str.at(i);
//         }
//         else {
//             if (str2.size() != 0) {
//                 for(int j = 0; j < str2.size(); j ++) {
//                     ret += pow(10,str2.size()-1-j)*(int)(str2.at(j)-48);
//                 }
//             }
//             str2="";
//         }
//     }
//     if (str2.size() != 0) {
//         for(int j = 0; j < str2.size(); j ++) {
//             ret += pow(10,str2.size()-1-j)*(int)(str2.at(j)-48);
//         }
//     }

//     cout <<ret<<"\n";
    
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

ll n, sum, tmp;
char board[5000002];

int main (void) {
    scanf("%lld", &n);
    scanf("%s", board);
    sum=0;
    tmp=0;
    for(int i = 0;i < n; i++) {
        if ('0'<= board[i] && board[i]<='9') {
            tmp = 10*tmp + (int)(board[i]-'0');
        }
        else {
            sum += tmp;
            tmp=0;
        }
    }
    printf("%lld\n", sum);
    return 0;
}

#include<cstdio>

char in[5000000];

long long solve(int n){
	long long ret = 0, num = 0;
	for(int i=0; i<=n; ++i){
		if('0'<=in[i] && in[i]<='9')
			num = num*10 + in[i] - '0';
		else
			ret += num, num = 0;
	}
	return ret;
}

int main(){
	int n;
	scanf("%d%s", &n, in);
	printf("%lld", solve(n));
}