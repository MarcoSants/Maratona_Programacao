#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	float a,b,c,hip,aux1,aux2;
	

	while(scanf("%f%f%f",&a,&b,&c)!=EOF){
	hip=sqrt(pow(a,2)+pow(12,2));
	aux1=12/b;	
	aux2=hip/c;
	if(aux1>=aux2)
		printf("S\n");
		else
			printf("N\n");
	}
	return 0;
}

