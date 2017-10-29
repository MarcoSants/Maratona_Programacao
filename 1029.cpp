#include <iostream>
#include <cstdio>
int num;
using namespace std;

int fib(int m){	
	
	num++;

	if(m==0)
		return 0;
		else{
			if(m==1)
				return 1;
				else
					return fib(m-1)+fib(m-2);	
		}
}

int main(){
	int n,m,a,i;	
	
	scanf("%d",&n);
	while(n){	
	scanf("%d",&m);
	num=-1;
	a=fib(m);
	printf("fib(%d) = %d calls = %d\n",m,num,a);	
	n--;
	num=0;
	}
	return 0;
}

/* FIbbonaci COM PD
#include <iostream>
#include <cstdio>
int num;
using namespace std;

int fib(int m, int vet[]){
	int j;	
	
	num++;
	if(vet[m])
		return vet[m];
	else{
		if(m==0)
			j=0;
		else{
			if(m==1)
				j=1;
			else
				j=(fib(m-1,vet)+fib(m-2,vet));
			}	
		}
	return j;
}

int main(){
	int n,m,a,i,vet[40];	
	
	scanf("%d",&n);
	while(n){	
	scanf("%d",&m);
	for(i=1;i<=m;i++)
		vet[i]=0;
	num=-1;
	a=fib(m,vet);
	printf("fib(%d) = %d calls = %d\n",m,num,a);	
	n--;
	num=0;
	}
	return 0;
}
*/
