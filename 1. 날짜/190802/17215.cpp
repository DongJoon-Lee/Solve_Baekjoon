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

string board;
char data[12][3];
int sum[12]={0,};

int main (void) {
    cin >> board;
    for(int i = 0; i < 12; i ++) {
        fill_n(data[i], 3, '0');
    }
    int a=0, b=1;
    for(int i = 0; i < board.size(); i ++) {
        if (board.at(i) == 'S') {
            data[a][0] = 'S';
            data[a][1] = 'S';
            a++;
            b=1;
            continue;
        }
        else if (board.at(i) == 'P') {
            data[a][2] = 'P';
            data[a][0]='P';
            a++;
            b=1;
            continue;
        }
        else {
            data[a][b] = board.at(i);
            b++;
            if (b==3) {
                a++;
                b=1;
            }
        }
    }
    // 테스트
    cout << "a " << a << "\nb " << b << "\n"; 
    for(int i = 0; i <=a; i ++) {
        cout <<i << " \n";
        for(int j = 0; j <= 2; j ++) {
            cout <<data[i][j] << " ";
        }
        cout << "\n";
    }
    //
    for(int i = 1; i <=2 ; i ++) {
        if (49<= data[0][i]&& data[0][i] <= 57) {
            sum[0] += data[0][i]-48;
        }
        else if (data[0][i] == 'S') {
            sum[0] += 10;
            break;
        }
        else if (data[0][i] == 'P') {
            sum[0]=10;
            break;
        }
    }
    //테스트
    cout << sum[0] << "\n";
    //
    int keepsum=0;
    
    for(int i = 1; i <= 2; i ++) {
        keepsum=0;
        if (48<= data[1][i]&& data[1][i] <= 57) {
            keepsum += data[1][i]-48;
        }
        else if (data[1][i] == 'S') {
            keepsum = 10;
        }
        else if (data[1][i] == 'P') {
            if (data[1][i-1] != '-') {
                keepsum = 10-(data[1][i-1]-48);
            }
            else {
                keepsum=10;
            }
            // keepsum=10;
        }
        if (data[0][0] == 'S') {
            keepsum*=2;
        }
        else if (data[0][0] == 'P' && i == 1) {
            keepsum*=2;
        }
        sum[1]+=keepsum;
    }
    // if (data[0][0] == 'S' || data[0][0] == 'P') {
    //     keepsum*=2;
    // }
    // sum[1]=keepsum;
    //테스트
    cout << keepsum << "\n";
    //
    for(int i = 2; i <= 9; i ++) {
        
        for(int j = 1; j <= 2; j ++) {
            keepsum=0;
            if (49 <= data[i][j] && data[i][j] <= 57) {
                keepsum += data[i][j]-48;
            }
            else if (data[i][j] == 'S') {
                keepsum = 10;
                
            }
            else if (data[i][j] == 'P') {
                if (data[i][j-1] != '-') {
                    keepsum = 10-(data[i][j-1]-48);
                }
                else {
                    keepsum = 10;
                }
                
                
            }
            sum[i] += keepsum;

            if (data[i-1][0] == 'S') {
                sum[i]+=keepsum;
            }
            else if (data[i-1][0] == 'P' && j == 1) {
                sum[i]+=keepsum;
            }
            if (data[i-2][0] == 'S' && data[i-1][0] == 'S') {
                sum[i]+=keepsum;
            }
            // cout << keepsum << "  i = " << i << " " << j << "\n";
            // sum[i] += keepsum;
        }
        // if (data[i-1][0] == 'P' || data[i-1][0] == 'S') {
        //     sum[i] += keepsum;
        // }
        // if (data[i-2][0] == 'S') {
        //     sum[i] += keepsum;
        // }
        // sum[i] += keepsum;
    }
    for(int i = 10; i <= a; i ++) {
        keepsum=0;
        for(int j = 1; j <= 2; j ++) {
            if (49 <= data[i][j] && data[i][j] <= 57) {
                keepsum += data[i][j]-48;
            }
            else if (data[i][j] == 'S') {
                keepsum = 10;
                break;
            }
            else if (data[i][j] == 'P') {
                keepsum = 10;
                break;
            }
        }
        sum[i] += keepsum;
    }
    int ans = 0;
    for(int i = 0; i <= a; i ++) {
        cout << i<<" " << sum[i] << "\n";
        ans += sum[i];
    }
    cout << ans;

}