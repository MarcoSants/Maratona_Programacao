#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

typedef struct forma{
	string st;
	float v;
}forma;

int main(){
	int n,m,s,i,j,v;
	float val=0,r;
	string sr;

	scanf("%d",&n);
	while(n){
	scanf("%d",&m);	
	forma vet[m];
	for(i=0;i<m;i++){
		cin>>vet[m].st;
		cin>>vet[m].v;
	}
	scanf("%d",&s);
	for(i=0;i<s;i++){
		cin>>sr;
		cin>>r;
		for(j=0;j<m;j++){
			v=sr.compare(vet[j].st);
			if(v==0)				
				val=val+r*vet[j].v;
		}
	}
	printf("%.2f",val);
	n--;
	val=0;
	}
	return 0;
}
/*
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

typedef struct forma{
	string st;
	float v;
}forma;

int main(){
	int n,m,s,i,j,v;
	float val=0,r;
	string sr;

	scanf("%d",&n);
	while(n){
	scanf("%d",&m);	
	forma vet[m];
	for(i=0;i<m;i++){
		cin>>vet[m].st;
		cin>>vet[m].v;
	}
	scanf("%d",&s);
	for(i=0;i<s;i++){
		cin>>sr;
		cin>>r;
		for(j=0;j<m;j++){
			v=sr.compare(vet[j].st);
			if(v==0)				
				val=val+r*vet[j].v;
		}
	}
	printf("%.2f",val);
	n--;
	val=0;
	}
	return 0;
}
*/
