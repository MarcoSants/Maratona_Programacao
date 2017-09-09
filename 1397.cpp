#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,m,num1,num2,a=0,b=0;

	scanf("%d",&n);
	while(1){
		while(n){
		cin>>num1>>num2;
		if(num1>num2){	
		a++;	
			}else{
			if(num2>num1){
			b++;
				}else{
				a=a;
				}
			}	
		n--;	
		}
	printf("%d %d\n",a,b);
	a=b=0;
	scanf("%d",&n);
	if(n==0)
		return 0;		
	}
} 
