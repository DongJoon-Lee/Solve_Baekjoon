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
int cnt = 0;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int y, int x){
  mat[y][x] = 0;
  cnt++;
  for(int i=0;i<4;i++){
    int yy = y + dir[i][0], xx = x + dir[i][1];
    if(yy < 0 || yy >= N || xx < 0 || xx >= M) continue;
    if(mat[yy][xx] == 1)
      dfs(yy,xx);
  }
}

int main(){
  int ans1 = 0, ans2 = 0;
  scanf("%d %d",&N,&M);
  for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
      scanf("%d",&mat[i][j]);
  for(int i=0;i<N;i++)
    for(int j=0;j<M;j++){
      if(mat[i][j] == 1){
        ans1++;
        cnt = 0;
        dfs(i,j);
        ans2 = max(ans2,cnt);
      }
    }
  printf("%d\n%d\n",ans1,ans2);
}