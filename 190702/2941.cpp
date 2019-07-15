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
    string word;
    cin >> word;
    word+="!";
    int size = 0, tok = 0;
    for(int i = 0; i < word.length()-1; i ++) {
        if (tok == 1) {
            if (word.at(i+1)=='=') {
                tok = 0;
                continue;
            }
            else{
                size += 2;
                tok = 0;
                continue;
            }

        }
        if (99 == word.at(i)) {
            if (word.at(i+1) == 61 || word.at(i+1) == 45) {
                continue;
            }
            size++;
        }
        else if (word.at(i) == 'd' && word.at(i+1) == 'z') {
            tok = 1;
            continue;
        }
        else if (word.at(i) == 'd' && word.at(i+1) == '-') {
            continue;
        }
        else if (word.at(i) == 'l' && word.at(i+1) == 'j') {
            continue;
        }
        else if (word.at(i) == 's' && word.at(i+1) == '=') {
            continue;
        }
        else if (word.at(i) == 'z' && word.at(i+1) == '=') {
            continue;
        }
        else if (word.at(i) == 'n' && word.at(i+1) == 'j') {
            continue;
        }
        else {
            size ++;
        }

    }
    cout << size << "\n";
}