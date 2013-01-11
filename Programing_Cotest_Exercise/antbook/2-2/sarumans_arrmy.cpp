#include<iostream>
#include<algorithm>

using namespace std;

#define MAX_N 1000
int X[MAX_N];

int main(){
	
	int n,R,i,count;
	
	cin>>n>>R;
	
	for(i=0;i<n;i++){
		cin>>X[i];
	}
	
	sort(X,X+n);
	
	int t=X[0];
	
	i=1;
	while(i<n){
		
	while(t+R>=X[i]){
		i++;
	}
	
	t=X[i];

	i++;
	
	while(t+R>=X[i]){
		i++;
	}
	
	t=X[i++];
	count++;
	
	}
	
	cout<<count<<endl;
	
	return 0;
}
