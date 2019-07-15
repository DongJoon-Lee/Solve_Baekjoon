// // # include <string>
// // # include <iostream>
// // # include <vector>
// // # include <queue>
// # include <stdio.h>
// // # include <algorithm>
// // # include <ctype.h>
// // using namespace std;

// // const int MAX = 2147483647;
// // const int MIN = -2147483648;

// void hanoi(int number, int start, int end, int mid) {
//     if (number == 1) {
//         printf("%d %d\n", start, end);
//     }
//     else{
//         hanoi(number-1, start, mid,end);
//         printf("%d %d\n", start, end);
//         hanoi(number-1, mid, end, start);
//     }
// }

// int moveNum(int num) {
//     if (num == 3) {
//         return 7;
//     }
//     else {
//         return 1 + 2 * moveNum(num-1);
//     }
// }

// int main (void) {
//     int a;
//     scanf("%d", &a);
//     printf("%d\n", moveNum(a));
//     hanoi(a,1,3,2);
// }

// https://jaimemin.tistory.com/1074

# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
using namespace std;

const int MAX = 2147483647;
const int MIN = -2147483648;



int n;
vector <pair<int, int>> v;

void hanoi(int num, int start, int end, int mid) {
    if(num == 1) {
        v.push_back({start, end});
    }
    else {
        hanoi(num-1, start, mid, end);
        v.push_back({start, end});
        hanoi(num-1, mid, end, start);
    }
}
int main (void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    hanoi(n, 1, 3, 2);
    cout<<v.size()<<"\n";
    for(int i = 0; i < v.size(); i ++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}