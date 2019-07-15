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

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int count4 = 0;
    int min=1, max = 6;
    int a, count, reta=0,retb=0;
    cin>>a;
    while(max <= a) {
        min = max;
        count4++;
        max = min + 5 + 4 * count4;
    }
    count = (5 + 4 * count4)/2-1;
    if (a == min || a == max) {
        reta = 0;
        retb = count4*2;
    }
    else if (a<=min+1 + count) {
        reta=a-min-1;
        retb = count4*2+1 - (a-min-1);
    }
    else {
        reta = 0 + (max-a);
        retb = (count4+1)*2 - (max-a);
    }
    cout << reta+1 <<"/"<<retb+1<<"\n";
}