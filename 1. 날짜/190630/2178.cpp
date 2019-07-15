#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 987654321;
const int MOD = 1000000007;

int mat[101][101];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int main(){
  int N,M;
  scanf("%d %d",&N,&M);
  for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
      scanf("%1d",&mat[i][j]);
  queue<pair<int,int> > q;
  mat[0][0] = 2;
  q.push(make_pair(0,0));
  while(!q.empty()){
    int y = q.front().first, x = q.front().second;
    if(y == N-1 && x == M-1)
      return !printf("%d\n",mat[y][x]-1);
    q.pop();
    for(int i=0;i<4;i++){
      int yy = y + dir[i][0], xx = x + dir[i][1];
      if(yy < 0 || yy >= N || xx < 0 || xx >= M) continue;
      if(mat[yy][xx] == 1){
        mat[yy][xx] = mat[y][x] + 1;
        q.push(make_pair(yy,xx));
      }
    }
  }
}