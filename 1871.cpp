#include <iostream>
#include <cstdio>
#include <string> 
using namespace std;

int main(){
	unsigned long long num1,num2,res;
	int i;

	while(1){
		cin>>num1>>num2;
		if(num1==0 && num2==0)
			return 0;
		string st1 = to_string(num1+num2);
		for(i=0;i<st1.length();i++){
			if(st1[i]!='0')			
			printf("%c",st1[i]);
		}
		printf("\n");
	}
	return 0;
}
