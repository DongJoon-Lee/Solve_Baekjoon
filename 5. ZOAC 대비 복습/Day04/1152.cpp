# include <string>
# include <iostream>
# include <vector>
# include <queue>
# include <stdio.h>
# include <algorithm>
# include <ctype.h>
# include <cstdlib>
#include <queue>
# include <string.h>
using namespace std;
typedef long long ll;
# define pb push_back
# define mp make_pair

const int MAX = 2147483647;
const int MIN = -2147483648;

int main (void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a=0;
    char str[1000000];
    cin.getline(str, 1000000, '\n');
    char* tok = strtok(str, " ");
    while(tok != NULL) {
        tok = strtok(NULL, " ");
        a++;
    }
    cout << a<<"\n";


    return 0;
}
