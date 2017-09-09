#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	bool t1=true,t2=true;
	int v,i;
	unsigned long long res1=0,res2=0;

	while(1){
	string st1,st2;
	cin>>st1>>st2;
	if(st1.length()==1 && st2.length()==1 && st1[0]=='0' && st2[0]=='0')
		return 0;

	for(i=0;i<st1.length();i++){
	v=st1[i]-'0';
	res1=res1+v;
	}

	if(res1>9){
		while(1){
		string st3 = to_string(res1);
		res1=0;
			for(i=0;i<st3.length();i++){
			v=st3[i]-'0';
			res1=res1+v;
			}
			if(res1<=9)
				break;
		}
	}

	for(i=0;i<st2.length();i++){
	v=st2[i]-'0';
	res2=res2+v;
	}

	if(res2>9){
		while(1){
		string st4 = to_string(res2);
		res2=0;
			for(i=0;i<st4.length();i++){
			v=st4[i]-'0';
			res2=res2+v;
			}
			if(res2<=9)
				break;
		}
	}

	if(res1>res2)
	printf("1\n");
	else{
		if(res2>res1)
		printf("2\n");
		else{
			printf("0\n");
		}
	}
	res1=res2=0;
	t1=true;
	t2=true;	
	}
}
