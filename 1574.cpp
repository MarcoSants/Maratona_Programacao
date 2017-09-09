#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,num,in,i,j=0,val=0,vet[100];
	string st1;

	scanf("%d",&n);
	while(n){
	for(i=0;i<100;i++)
		vet[i]=0;
	scanf("%d",&in);
		while(in){
			cin>>st1;
			if(st1=="LEFT"){
				vet[j]=-1;
			}else{
				if(st1=="RIGHT"){
					vet[j]=-2;
					}else{
					cin>>st1;
					cin>>num;
					vet[j]=num;
					}	
			}
		j++;
		in--;
		}
	for(i=0;i<100;i++){
		if(vet[i]!=0 && vet[i]!=-1 && vet[i]!=-2){
			while(vet[vet[i]-1]!=-1 && vet[vet[i]-1]!=-2){			
				vet[i]=vet[vet[i]-1];
			}
		vet[i]=vet[vet[i]-1];
		}

		if(vet[i]==0){
			break;}
		else{
		if(vet[i]==-1){
			val--;
			}else{
				val++;
			}
		} 		
	}
	printf("%d\n",val);
	val=0;
	j=0;
	n--;
	}
	return 0;
}
