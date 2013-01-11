#include<iostream>

#define MAX_N 100

int par[MAX_N+1];
int rank[MAX_N+1];

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
	
	
