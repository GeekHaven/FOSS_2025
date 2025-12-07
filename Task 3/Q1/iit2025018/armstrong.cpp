#include<iostream>
#include<stdlib.h>
#include<vector>
#include<set>
using namespace std;

int main(){
    	int n;
		cin>>n;
		int k=n;
		int ans=0;
		while(k>0){
			int a=k%10;
			ans+= a*a*a;
			a/=10;
		}
		if(ans==n){
			cout<<"yes";
		}else{
			cout<<"no";
		}
		return 0;
}

