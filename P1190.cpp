#include<iostream>
using namespace std;
int n,m,s[11000],ans;
int main(){
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>s[i];
  int t=m+1;
  while(t<=n+m){
    for(int i=1;i<=m;i++){
      s[i]--;
      if(s[i]==0)
        s[i]=s[t++];
    }
    ans++;
  }
  cout<<ans<<endl;
  return 0;
}
