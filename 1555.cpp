#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n=0,x=0,y=0,b=0,c=0,r=0;

	scanf("%d",&n);
	while(n){

	scanf("%d%d",&x,&y);
	r=pow((3*x),2)+pow(y,2);
	b=2*pow(x,2)+pow(5*y,2);
	c=-100*x+pow(y,3);	
	
	if(b>c && b>r){
		printf("Beto ganhou\n");
		}else{
		if(c>b && c >r){
		printf("Carlos ganhou\n");
			}else{
			printf("Rafael ganhou\n");
			}
		}
	r=b=c=0;						
	n--;
	}
	
	return 0;
}

