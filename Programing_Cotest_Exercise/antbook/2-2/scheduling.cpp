#include<iostream>
#include<utility>
#include<algorithm>


using namespace std;

#define MAX_N 100000
int s[MAX_N+1],t[MAX_N+1];

int main(){
	
	int n,i,ans=0;
	pair<int,int> w[MAX_N+1];
	
	
	cout<<"n=";
	cin>>n;
	cout<<"s=";
	
	for(i=0;i<n;i++){
		
		cin>>s[i];
		
	}
	cout<<"t=";
	
	for(i=0;i<n;i++){
		
		cin>>t[i];
	
	}	
	
	for(i=0;i<n;i++){
		
		w[i].first=t[i];
		w[i].second=s[i];
		
	}

	sort(w,w+n);
	
	i=0;
	int t=0;
	
	while(i<n){
	
		if(t<w[i].second){
			ans++;
			t=w[i].first;
		}
		i++;
	}
	cout<<ans<<endl;
	
	return 0;
}
