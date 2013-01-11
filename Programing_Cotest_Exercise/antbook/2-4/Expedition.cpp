#include<iostream>
#include<queue>

using namespace std;

#define MAX_N 10000

void solve();

int A[MAX_N];
int B[MAX_N];

int i,N,L,P;

int main(){
	
	cin>>N>>L>>P;
	
	for(i=0;i<N;i++){
		cin>>A[i];
	}
	
	for(i=0;i<N;i++){
		cin>>B[i];
	}
	
	solve();
	
	
	return 0;
}



void solve(){
	
	priority_queue<int>pq;
	
	A[N]=L;
	
	int tank=P;
	int pos=0; //åªç›ín
	int ans=0;
	
	for(i=0;i<N;i++){
		//éüÇ…êiÇﬁãóó£
		int d=A[i]-pos;
		
		while(tank-d<0){
			if(pq.empty()){
				cout<<"-1"<<endl;
				return;
			}
			
			tank+=pq.top();
			pq.pop();
			ans++;
		}
		
		tank-=d;
		pos=A[i];
		pq.push(B[i]);
		
	}
	
		cout<<ans<<endl;
	
	return;
	
}
