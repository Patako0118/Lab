#include<iostream>
#include<queue>


using namespace std;

#define MAX_N 20000

int L[MAX_N];

int main(){
	
	int i,N,ans=0;
	priority_queue< int,vector<int>,greater<int> >pq;
	
	
	cin>>N;
	
	for(i=0;i<N;i++){
		cin>>L[i];
	}
	
	for(i=0;i<N;i++){
		pq.push(L[i]);
	}
	
	int l1,l2;
	
	while(1){
		
		l1=pq.top();
		pq.pop();
		
		if(pq.empty())break;
		
		l2=pq.top();
		pq.pop();
		
		
		
		ans+=l1+l2;
		
		pq.push(l1+l2);
	}
		
	
	cout<<ans<<endl;
	
}
