#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(){
  int N; scanf("%d",&N);
  vector<pair<int,pair<int,string> > > v;
  for(int i=0;i<N;i++){
    string s; cin >> s;
    int a = s.size();
    int b = 0;
    for(int j=0;j<s.size();j++){
      if('0' <= s[j] && s[j] <= '9'){
        b += s[j] - '0';
      }
    }
    v.push_back(make_pair(a,make_pair(b,s)));
  }
  sort(v.begin(),v.end());
  for(int i=0;i<N;i++){
    printf("%s\n",v[i].second.second.c_str());
  }
}