#include<iostream>


using namespace std;

int N,M;
char lake[101][101];
int count;
void dfs(int x,int y);

int main(){
	
	int i,j;
	cin>>N>>M;
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			
			cin>>lake[i][j];
		
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			
			if(lake[i][j]=='W'){
				
				dfs(i,j);
				count++;
			
			}
			
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}

void dfs(int y,int x){
	
	if(lake[y][x]=='W'){
		lake[y][x]='.';
	}
	
	for(int dy=-1;dy<=1;dy++){
		for(int dx=-1;dx<=1;dx++){
			int nx=x+dx;
			int ny=y+dy;
			
			if(nx>=0 && ny>=0 && ny<N && nx<M && lake[ny][nx]=='W')dfs(ny,nx);
		
		}
	}
	
	
	return;
}
