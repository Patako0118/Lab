#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

#define MAX_N 20000
int L[MAX_N+1];

int main(){
	
	int i,n,t;
	int ans=0;
	
	
	cin>>n;
	
	for(i=0;i<n;i++){
		
		cin>>L[i];
		
	}
	
	int min1,min2,tmp;
	
	while(n>1){
		
		min1=0;
		min2=1;
		
		if(L[min1]>L[min2]){
			
			tmp=L[min1];
			L[min1]=L[min2];
			L[min2]=tmp;
		}
		
		for(i=2;i<n;i++){
			
			if(L[i]<L[min1]){
				min2=min1;
				min1=i;
			}else if(L[i]<L[min2]){
				min2=i;
			}
			
		}
		
		t=L[min1]+L[min2];
		ans+=t;
		
		
		if(min1==n-1){
		
		tmp=min1;
		min1=min2;
		min2=tmp;
		
		}
		
		L[min1]=t;
		L[min2]=L[n-1];
		
		
		n--;
	}
		
	
	
	cout<<ans<<endl;
	
	return 0;
}