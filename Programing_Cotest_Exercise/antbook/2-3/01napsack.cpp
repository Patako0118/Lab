#include<iostream>
#include<algorithm>
using namespace std;

int rec(int i,int j);
int n,Wt;
int w[101],v[101];

int main(){
	
	int i;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		
		cin>>w[i]>>v[i];
		
	}
	
	cin>>Wt;
	
	cout<<rec(0,Wt)<<endl;
	
	
	return 0;
}

int rec(int i,int j){
	
	int res;
	
	if(i==n){
		
		res=0;
		
	}else if(j<w[i]){
		
		res=rec(i+1,j);
		
	}else{
	
		res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
		
	return res;
}
