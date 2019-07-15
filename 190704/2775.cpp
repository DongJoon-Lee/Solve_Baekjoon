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

// vector <pair<pair<int, int>, int> > v;

int numofpeo(int floor, int number) {
    if (floor == 0 || number == 1) {
        return number;
    }
    else{
        return numofpeo(floor-1, number) + numofpeo(floor, number -1);
    }
}

int main (void) {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int a;
    cin >> a;
    int floor, number;
    for(int j = 0; j < a; j ++) {
        scanf("%d %d", &floor, &number);
        printf("%d\n", numofpeo(floor, number));
        
    }
    
    // cout << v[0].first.first << v[0].first.second << v[0].second <<"\n";
}