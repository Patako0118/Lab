#include<iostream>
#include<queue>
#include<utility>

using namespace std;


const int INF=100000000;

int N,M;
char m[101][101];
int d[101][101];

int bfs();
typedef pair<int,int>P;
int sx,sy,gx,gy;

int main(){

	
	int i,j;
	cin>>N>>M;
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			
			cin>>m[i][j];
		
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(m[i][j]=='S'){
				sx=j;
				sy=i;
			}else if(m[i][j]=='G'){
				gx=j;
				gy=i;
			}
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			d[i][j]=INF;
		}
	}
	
	
	cout<<bfs()<<endl;
	
return 0;
	
}


int bfs(){
	
	int nx,ny;
	
	queue<P> q;
	q.push(P(sx,sy));
	d[sy][sx]=0;
	
	while(q.size()){
		
		P p=q.front();
		q.pop();
		
		if(p.first==gx && p.second==gy)break;
		
		int dx[4]={-1,0,1,0};
		int dy[4]={0,-1,0,1};

		for(int i=0;i<4;i++){
			nx=p.first+dx[i];
			ny=p.second+dy[i];
			if(nx>=0 && ny>=0 && nx<M && ny<N && m[ny][nx]!='#' && d[ny][nx]==INF){
				q.push(P(nx,ny));
				d[ny][nx]=d[p.second][p.first]+1;
			}
		}
		
	}
	
	
	return d[gy][gx];
}
