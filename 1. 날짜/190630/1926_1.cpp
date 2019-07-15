#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 987654321;
const int MOD = 1000000007;

int N,M;
int mat[501][501];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int bfs(int sy, int sx){
  int ret = 0;
  queue<pair<int,int> > q;
  q.push(mp(sy,sx));
  while(!q.empty()){
    int y = q.front().first, x = q.front().second;
    q.pop();
    ret++;
    for(int i=0;i<4;i++){
      int yy = y + dir[i][0], xx = x + dir[i][1];
      if(yy < 0 || yy >= N || xx < 0 || xx >= M) continue;
      if(mat[yy][xx] == 1){
        mat[yy][xx] = 0;
        q.push(mp(yy,xx));
      }
    }
  }
  return ret;
}

int main(){
  int ans1 = 0, ans2 = 0;
  scanf("%d %d",&N,&M);
  for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
      scanf("%d",&mat[i][j]);
  
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(mat[i][j] == 1){
        ans1++;
        ans2 = max(ans2,bfs(i,j));
      }
    }
  }
  printf("%d\n%d\n",ans1,ans2);
}