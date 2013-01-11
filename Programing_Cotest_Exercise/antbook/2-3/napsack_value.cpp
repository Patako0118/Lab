#include<iostream>
#include<algorithm>

using namespace std;

#define MAX_N 100
#define MAX_V 100
const int INF=100000;

int dp[MAX_N+1][MAX_N*MAX_V+1];
int w[MAX_N+1],v[MAX_N+1];

int main(){

	fill(dp[0],dp[0]+MAX_N*MAX_V+1,INF);
	int n,Wt,i,j;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>w[i]>>v[i];
	}
	
	cin>>Wt;
	
	dp[0][0]=0;
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=MAX_N*MAX_V+1;j++){
			
			if(j<v[i-1]){
				dp[i][j]=dp[i-1][j];
			}else{
				dp[i][j]=min(dp[i-1][j],dp[i-1][j-v[i-1]]+w[i-1]);
			}
			
		}
	}
	
	int res=0;
	
	for(i=0;i<MAX_N*MAX_V+1;i++){
		if(dp[n][i]<=Wt)res=i;
	}
	cout<<res<<endl;

	return 0;
}