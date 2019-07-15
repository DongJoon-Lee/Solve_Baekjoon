# include <stdio.h>
# include <iostream>
using namespace std;

int main (void) {
    int backup,backup2,  a = 0, b = 0;
    cin >> backup;
    backup2 = backup;
    while (backup != backup2 || b == 0) {
        a = backup2/10 + backup2%10;
        backup2 = a%10 + (backup2%10)*10;
        b ++;
    }
    cout<<b<<endl;

    return 0;
}