#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n,i,j,k,t,x,y,a=2,b=1;
		
	scanf("%d",&n);
	while(n){

	t=pow(n,2);
	char mat[n][n];
	for(j=0;j<n;j++){	
		for(i=0;i<n;i++){
			mat[j][i]='O';
		}
	}
	x = (n-1)/2;
	y = (n-1)/2;
	mat[x][y]='X';
	for(j=0;j<n;j++){	
		for(i=0;i<n;i++){
			printf("%c",mat[j][i]);
		}
	printf("\n");
	}
	printf("@\n");
	t--;

		while(t){

		mat[x][y]='O';
		y++;
		mat[x][y]='X';	
		for(j=0;j<n;j++){	
			for(i=0;i<n;i++){
				printf("%c",mat[j][i]);
			}
		printf("\n");
		}
		printf("@\n");
		t--;		
			
		for(k=0;k<b;k++){
		mat[x][y]='O';
		x--;		
		mat[x][y]='X';	
		for(j=0;j<n;j++){	
			for(i=0;i<n;i++){
				printf("%c",mat[j][i]);
			}
		printf("\n");
		}
		printf("@\n");
		t--;
		}

		for(k=0;k<a;k++){
		mat[x][y]='O';
		y--;		
		mat[x][y]='X';	
		for(j=0;j<n;j++){	
			for(i=0;i<n;i++){
				printf("%c",mat[j][i]);
			}
		printf("\n");
		}
		printf("@\n");
		t--;
		}

		for(k=0;k<a;k++){
		mat[x][y]='O';
		x++;		
		mat[x][y]='X';	
		for(j=0;j<n;j++){	
			for(i=0;i<n;i++){
				printf("%c",mat[j][i]);
			}
		printf("\n");
		}
		printf("@\n");
		t--;
		}

		for(k=0;k<a;k++){
		mat[x][y]='O';
		y++;		
		mat[x][y]='X';	
		for(j=0;j<n;j++){	
			for(i=0;i<n;i++){
				printf("%c",mat[j][i]);
			}
		printf("\n");
		}
		printf("@\n");
		t--;
		}

		a=a+2;
		b=b+2;	
		}
	a=2;
	b=1;
	scanf("%d",&n);
	}	
	return 0;
}
