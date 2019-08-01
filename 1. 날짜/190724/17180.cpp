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

int N, M;
string N1, M1;
int idxN=-1, idxM=-1, ans = 0;

int main (void) {
    cin >> N >> M;
    cin >> N1 >> M1;

    while(idxN != (N-1)&& idxM != (M-1)) {
        // cout << idxN << " " << idxM << "\n";
        if (idxN == -1 && idxM == -1) {
            if (N1.at(idxN+1) == M1.at(idxM+1)) {
                idxN++;
                idxM++;
                // cout << "여기1\n";
                continue;

            }
            else {
                ans += (int)(abs(N1.at(idxN+1)-M1.at(idxM+1)));
                idxN++;
                idxM++;
                // cout << "여기2\n";
                continue;
            }
        }
        else if ((N1.at(idxN+1) == N1.at(idxN) && M1.at(idxM) != M1.at(idxM+1))|| (M1.at(idxM+1) == M1.at(idxM) && N1.at(idxN) != N1.at(idxN+1))) {
            if (N1.at(idxN+1) == N1.at(idxN)) {
                idxN ++;
                // cout << "여기3\n";
                continue;
            }
            else if (M1.at(idxM+1) == M1.at(idxM)) {
                idxM ++;
                // cout << "여기4\n";
                continue;
            }
        }
        else if (N1.at(idxN+1) == N1.at(idxN) && M1.at(idxM+1) == M1.at(idxM)) {
            idxN++;
            idxM++;
            // cout << "여기5\n";
            continue;
        }
        else if (N1.at(idxN+1) == M1.at(idxM+1)) {
            idxN++;
            idxM++;
            // cout << "여기6\n";
            continue;
        }
        else {
            ans += abs(N1.at(idxN+1)-M1.at(idxM+1));
            idxN++;
            idxM++;
            // cout << "여기7\n";
        }
    }
    // cout << ans << " " << idxN << " " << idxM << " " << "\n";
    if (!(idxN == N-1 && idxM == M-1)) {
        if (idxN == N-1) {
            while(idxM < M) {
                if (N1.at(idxN) == M1.at(idxM)) {
                    idxM ++;
                    N1.at(idxN) = 's';
                    continue;
                }
                else {
                    // cout << "여기8\n";
                    ans += abs(N1.at(idxN) - M1.at(idxM));
                    idxM++;
                    continue;
                }
            }
        }
        if (idxM == M-1) {
            while(idxN < N) {
                if (N1.at(idxN) == M1.at(idxM)) {
                    idxN ++;
                    continue;
                }
                else {
                    // cout << "여기8\n";
                    ans += abs(N1.at(idxN) - M1.at(idxM));
                    idxN++;
                    continue;
                }
            }
        }

    }
    
    cout << ans /*<< " " << idxN << " " << idxM << " " */<< "\n";
}