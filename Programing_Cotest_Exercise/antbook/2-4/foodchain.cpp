#include<iostream>

#define MAX_N 50000
#define MAX_K 100000
int N,K;

int T[MAX_K],X[MAX_K],Y[MAX_K];

int par[MAX_N+1];
int rank[MAX_N+1];

using namespace std;

//n—v‘f‚Å‰Šú‰»
void init(int n){
	for(int i=0;i<n;i++){
		par[i]=i;
		rank[i]=0;
	}
}

//–Ø‚Ìª‚ğ‹‚ß‚é
int find(int x){
	if(par[x]==x){
		return x;
	}else{
		return par[x]=find(par[x]);
	}
}

//x,y‚Ì‘®‚·‚éW‡‚ğ•¹‡
void unite(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y)return;
	
	if(rank[x]<rank[y]){
		par[x]=y;
	}else{
		par[y]=x;
		if(rank[x]==rank[y])rank[x]++;
	}
}

//“¯‚¶W‡‚©‚Ç‚¤‚©
bool same(int x,int y){
	return find(x)==find(y);
}
	
/////////////Union-Find///////////////

int main(){
	
	int i;
	
	cin>>N>>K;
	
	for(i=0;i<K;i++){
		cin>>T[i]>>X[i]>>Y[i];
	}
	
	init(N*3);
	
	int ans=0;
	
	for(int i=0;i<K;i++){
		int t=T[i];
		int x=X[i];
		int y=Y[i];
		
		if(x<0 || y<0 || x>=N || y>=N){
			ans++;
			continue;
		}
		
		if(t==1){
			if(same(x,y+N)||same(x,y+2*N)){
				
				ans++;
			
			}else{
				
				unite(x,y);
				unite(x+N,y+N);
				unite(x+2*N,y+2*N);
				
			}
			
		}else{
			if(same(x,y) || same(x,y+2*N)){
				
				ans++;
				
			}else{
				
				unite(x,y+N);
				unite(x+N,y+2*N);
				unite(x+2*N,y);
				
			}
			
		}
	}
			
		cout<<ans<<endl;
		
	return 0;
}
