// https://www.acmicpc.net/board/view/22716
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

vector <int> v;

long long sum(std::vector<int> &a) {
    long long sum = 0;
    for(int i = 0; i <v.size(); i ++) {
        sum += v[i];
    }
    return sum;
}
