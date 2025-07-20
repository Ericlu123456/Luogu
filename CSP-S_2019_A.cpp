#include <iostream>
#include <string>
using namespace std;
int n,k;
int twon(int a){
  int ans=1;
  for(int i=1;i<=a;i++) ans*=2;
  return ans;
}
string solve(int crrn,int crrk){
  cout<<crrn<<" "<<crrk<<endl;
  if(crrn==1&&crrk==0) return "0";
  if(crrn==1&&crrk==1) return "1";
  if(crrk<=twon(crrn-1)) return "0"+solve(crrn-1,crrk);
  else return "1"+solve(crrn-1,twon(crrn-1)-crrk);
}
int main(){
  cin>>n>>k;
  cout<<solve(n,k)<<endl;
  return 0;
} 

