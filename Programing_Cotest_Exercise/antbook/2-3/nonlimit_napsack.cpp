#include<iostream>
#include<algorithm>

using namespace std;
int w[101],v[101];
int dp[101][101];

int main(){
	
	int i,j,Wt,n;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		
		cin>>w[i]>>v[i];
		
		
		
	}
	
	cin>>Wt;
	/*	
	//kg‚¤ê‡
	for(i=1;i<=n;i++){
		for(j=1;j<=Wt;j++){
			for(int k=0;k*w[i-1]<=j;k++){
				dp[i][j]=max(dp[i][j],dp[i-1][j-k*w[i-1]]+k*v[i-1]);
			}
		}
	}
	*/
	for(i=1;i<=n;i++){
		for(j=1;j<=Wt;j++){
			
			if(j<w[i-1]){
				dp[i][j]=dp[i-1][j];
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-w[i-1]]+v[i-1]);
			}
			}
		}
	
	
	
	
	cout<<dp[n][Wt]<<endl;
	
	return 0;
}
