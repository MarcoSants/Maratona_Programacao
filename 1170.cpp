#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,count=0;
	float num;

	scanf("%d",&n);
	while(n){				
		count=0;
		scanf("%f",&num);
		while(num>1){
		num = num/2;
		count++;
		}
	printf("%d dias\n",count);
	n--;
	}
	return 0;
}
