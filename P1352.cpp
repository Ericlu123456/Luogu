#include<iostream>
#include<vector>
using namespace std;
const int N=6009;
int n,ans=0,r[N];
bool vis[N];
bool boss[N][N],ok[N];
void dfs(int crr){
	if(crr==n+1){
		int val=0;
		for(int i=1;i<=n;i++){
			//cout<<vis[i]<<" ";
			if(vis[i]) val+=r[i];
		}
		//cout<<endl<<val<<endl;
		ans=max(ans,val);
		return;
	}
	if(!ok[crr]){
		vis[crr]=1;
		for(int i=1;i<=n;i++)
			if(boss[crr][i])
				ok[i]=1;
		for(int i=1;i<=n;i++)
			if(boss[i][crr])
				ok[i]=1;
		dfs(crr+1);
		for(int i=1;i<=n;i++)
                        if(boss[crr][i])
                                ok[i]=0;
                for(int i=1;i<=n;i++)
                        if(boss[i][crr])
                                ok[i]=0;
		vis[crr]=0;
	}
	dfs(crr+1);
	return;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>r[i];
	for(int i=1;i<n;i++){
		int l,k;
		cin>>l>>k;
		boss[l][k]=1;
	}
	dfs(1);
	cout<<ans<<endl;
	return 0;
}
