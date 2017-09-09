#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	string st1;	
	int n;
	
	cin>>n;
	while(n){
	cin>>st1;

	if(st1.length()>3){	
		puts("3");
	}else{
		 if((st1[0]=='t' && st1[1]=='w')||(st1[1]=='w' && st1[2]=='o')||(st1[0]=='t' && st1[2]=='o')){
			puts("2");
		}else{
			puts("1");
		}
	}
	n--;
	}
	return 0;
}
