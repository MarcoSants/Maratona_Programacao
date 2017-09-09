#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,i,num;
	unsigned long long int val=1,g,res=1,k;

	scanf("%d",&n);
	while(n){
	scanf("%d",&num);
	for(i=1;i<num;i++){
		res=res*2;
		val=val+res;
	}
	g=val/12;
	k=g/1000;	
	res=val=1;
	printf("%llu kg\n",k);
	n--;
	}
	return 0;
}
