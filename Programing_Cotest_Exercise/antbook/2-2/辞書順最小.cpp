#include<string>
#include<iostream>

using namespace std;

#define MAX_N 2000
char s[MAX_N+1];
//char invs[MAX_N+1];
//char t[MAX_N+1];

int main(){
	
	int n,i,a,b;
	
	cin>>n;
	//“ü—Í
	for(i=0;i<n;i++){
		
		cin>>s[i];
	
	}
	
	a=0;
	b=n-1;
	
	while(a<=b){
		bool left=false;
		
		for(i=0;a+i<=b;i++){
			
			if(s[a+i]<s[b-i]){
				left=true;
				break;
			}else if(s[a+i]>s[b-i]){
				left=false;
				break;
			}
		}
	
		if(left) putchar(s[a++]);
		else putchar(s[b--]);
	}
	
	cout<<endl;
	
	return 0;
}
