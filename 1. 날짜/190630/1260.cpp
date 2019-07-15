#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 987654321;
const int MOD = 1000000007;

int N,M,V;
vector<vector<int> > adj(1001);
bool chk[1001];

void dfs(int x){
  printf("%d ",x);
  chk[x] = true;
  for(int i=0;i<adj[x].size();i++){
    int next = adj[x][i];
    if(!chk[next])
      dfs(next);
  }
}

int main(){
  scanf("%d %d %d",&N,&M,&V);
  for(int i=0;i<M;i++){
    int A,B;
    scanf("%d %d",&A,&B);
    adj[A].push_back(B);
    adj[B].push_back(A);
  }
  dfs(1);
  printf("\n");
}