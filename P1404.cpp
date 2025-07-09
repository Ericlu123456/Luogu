#include<bits/stdc++.h>
using namespace std;
int n,m,cnt[100009];
long long ans;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int k; cin>>k;
		cnt[i]=cnt[i-1]+k;
	}
	for(int i=1;i<=n-m;i++)
		for(int j=i+m-1;j<=n;j++){
			long long ans1=(cnt[j]-cnt[i-1])*1000/(j-i+1);
			//cout<<i<<" "<<j<<" "<<ans1<<endl;
			ans=max(ans,ans1);
		}
		cout<<ans<<endl;
		return 0;
}
