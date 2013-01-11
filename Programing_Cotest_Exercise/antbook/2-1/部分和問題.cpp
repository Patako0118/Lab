#include<iostream>

using namespace std;

int a[21];
int k,n;

bool dfs(int sum,int i);

int main(){

int i;

cin>>n;


for(i=0;i<n;i++){

cin>>a[i];

}

	cin>>k;


	if(dfs(0,0)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
return 0;

}

bool dfs(int sum, int i){

if(i==n){
	return sum==k;
}
	if(dfs(sum,i+1))return true;
	if(dfs(sum+a[i],i+1))return true;
	
	
	return false;
}

