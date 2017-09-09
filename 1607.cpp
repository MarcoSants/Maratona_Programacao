#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int n,m=1,i,count=0;
	string st1,st2;	
	
	cin>>n;
	while(n){
	cin>>st1>>st2;	
		for(i=0;i<st1.length();i++){	
			while(m){
			count++;
			if(st1[i]==st2[i]){	
				count--;
				m=0;
			}
			if(st1[i]!='z')			
				st1[i]=st1[i]+1;
			else			
				st1[i]='a';
			}
		m=1;
		}
	printf("%d\n",count);
	count=0;
	m=1;		
	n--;
	}
	return 0;
}
