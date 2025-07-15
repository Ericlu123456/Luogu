#include<bits/stdc++.h>
using namespace std;
int n,m;
struct provider{
	int price,amount;
};
bool cmp(const provider& p1,const provider& p2){
		if(p1.price!=p2.price) return p1.price<p2.price;
		else return p1.amount>p2.amount;
}
provider providers[5009];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int p,a; cin>>p>>a;
		providers[i].price=p;
		providers[i].amount=a;
	}
	sort(providers+1,providers+m+1,cmp);
	int cnt=0,ans=0;
	for(int i=1;i<=n;i++)
		if(cnt+providers[i].amount<=n){
			cnt+=providers[i].amount;
			ans+=providers[i].amount*providers[i].price;
		}
		else{
			ans+=(n-cnt)*providers[i].price;
			break;
		}
	cout<<ans<<endl;
	return 0;
}
