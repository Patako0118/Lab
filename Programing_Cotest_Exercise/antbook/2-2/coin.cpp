#include<iostream>
#include<algorithm>

using namespace std;

int C[6];
int V[6]={1,5,10,50,100,500};

int main(){
	
	int i,A,ans=0;
	
	for(i=0;i<6;i++){
		
		cin>>C[i];
	
	}
	
	cin>>A;
	
	for(i=5;i>=0;i--){
		
		int t=min(A/V[i],C[i]);
		A-=t*V[i];
		ans+=t;
		
	}
	
	
	cout<<ans<<endl;
	
	return 0;
}
