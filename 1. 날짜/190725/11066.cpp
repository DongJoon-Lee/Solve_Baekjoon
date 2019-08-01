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

int N;
int num;
int page[505][505] = {0,};
int save[505] = {0,};

int cal(int a, int b) {
    if (a == b) {
        return 0;
    }
    else if (page[a][b] != 0) {
        return page[a][b];
    }
    else {
        int x=0, y=MAX;

        for(int i = a; i <= b; i ++) {
            x += save[i];
        }
        for(int i = 0; i < b-a-1; i ++) {
            y = min(y, cal(a, a+i)+cal(a+i+1,b));
            cout << a<<" " << i<<" " << b << "\n";
        }
        page[a][b]= y + x;
        cout << a<<" "<<b<<" " <<page[a][b]<<" "  << y<<" "  << x << "\n";

        return page[a][b];
    }
}

int main (void) {
    cin >> N;
    for(int i = 1; i <= N; i ++) {
        cin >> num;
        save[505] = {0,};
        page[505][505] = {0,};
        // int save[num+2] = {0,};
        for(int j = 1; j <= num; j ++) {
            
            cin >> save[j];
            page[j-1][j] = save[j];
        }
        // for(int )

        //입력 완료
        int z = cal(0, num);
        cout << z << "\n";


    }
}