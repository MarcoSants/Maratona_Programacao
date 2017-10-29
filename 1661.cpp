#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,i;
	long long count=0;

	scanf("%d",&n);
	while(n){
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	for(i=0;i<n-1;i++){
		if(a[i]<0)
			count=count+((-1)*a[i]);
			else
				count=count+a[i];
		a[i+1]=a[i+1]+a[i];
	}
	printf("%lld\n",count);
	scanf("%d",&n);
	count=0;
	}
	return 0;
}
/* TIMELIMIT
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,i,j;
	long long cont=0;

	scanf("%d",&n);
	while(n){
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){	
		if(a[i]<0){
			j=i+1;
			while(a[i]<0){
				if(a[j]>0){	
					a[j]=a[j]-1;
					a[i]=a[i]+1;
					cont=cont+(j-i);
				}else{
					j++;
				}
			}
		}else{
			if(a[i]>0){	
				j=i+1;
				while(a[i]>0){
					if(a[j]<0){	
						a[j]=a[j]+1;
						a[i]=a[i]-1;
						cont=cont+(j-i);
					}else{
						j++;
					}
				}
				}else{
					continue;
				}
		}
	}
	printf("%lld\n",cont);
	scanf("%d",&n);
	cont=0;
	}
	return 0;
}
*/
