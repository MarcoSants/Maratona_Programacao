#include <iostream>
#include <cstdio>
using namespace std;

int main(){	
	int n,i,j,mat[21][41];
	long long int soma=0;

	for(i=0;i<21;i++){
		for(j=0;j<41;j++){
			mat[i][j]=0;
		}
	}
	mat[0][20]=1;	
	for(i=0;i<21;i++){
		for(j=0;j<41;j++){
			if(i!=0 && j!=0 &&j!=40){
			mat[i][j]=mat[i-1][j-1]+mat[i-1][j]+mat[i-1][j+1];
			}else {
				if(i!=0 && j==0){
				mat[i][j]=mat[i-1][j]+mat[i-1][j+1];
				}else{
					if(i!=0 && j==40){
					mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
					}else{
						continue;
					}
				}
			}
		}
	}
	scanf("%d",&n);
	for(i=0;i<41;i++)
		soma=soma+mat[n][i];
	printf("%lld\n",soma);	
	return 0;
}
