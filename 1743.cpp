#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int x[5];
	int y[5];
	int i;	
	bool a=true;	
	
	scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	scanf("%d%d%d%d%d",&y[0],&y[1],&y[2],&y[3],&y[4]);
	
	for(i=0;i<5;i++){
	if(x[i]==y[i])	
		a=false;
	}	
	if(a)
	printf("Y\n");		
		else
		printf("N\n");	
	return 0;
}
