#include<iostream>
#include<algorithm>

using namespace std;

#define MAX_N 1001

int dp[MAX_N][MAX_N];
char s[MAX_N],t[MAX_N];

int main(){
	
	int i,j,n,m;
	
	cin>>n>>m;
	
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	
	for(j=0;j<m;j++){
		cin>>t[j];
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			
			if(s[i]==t[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	
	cout<<dp[n][m]<<endl;
	
	return 0;
}
