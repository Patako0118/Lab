#include<iostream>
#include<algorithm>

using namespace std;
int w[101],v[101];
int dp[101];

int main(){
	
	int i,j,Wt,n;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		
		cin>>w[i]>>v[i];
		
	}
	
	cin>>Wt;
	
	for(i=1;i<=n;i++){
		for(j=Wt;j>=w[i-1];j--){
			
			dp[j]=max(dp[j],dp[j-w[i-1]]+v[i-1]);
		}
	}
	
	
	cout<<dp[Wt]<<endl;
	
	return 0;
}