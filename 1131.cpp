#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,a,b,in=0,gr=0,em=0,count=0;	
	bool on=true;
	
	while(on){
	scanf("%d %d",&a,&b);
	if(a>b){
		in++;
		}else{ 
			if(a<b){
				gr++;
				}else{
					em++;
				}
		}
	count++;
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d",&n);
	if(n==2)
		on=false;
	}
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",count,in,gr,em);
	if(a>b){
		printf("Inter venceu mais\n");
		}else{ 
			if(a<b){
				printf("Gremio venceu mais\n");
				}else{
					printf("Nao houve vencedor\n");
				}
		}
	return 0;
}
