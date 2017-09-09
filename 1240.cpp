#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){	
	string st1,st2;
	int n,i,j;
	bool a;

	scanf("%d",&n);
	while(n){
	cin>>st1>>st2;
	a = true;	

	if(st1.length()<st2.length()){
		a = false;
	}else{
		j=st1.length()-1;
		for(i=(st2.length()-1);i>=0;i--){
			if(st2[i]!=st1[j]){
			a = false;
			break;
			}
		j--;
		}	
	}	
	n--;
	if(a) 
	cout << "encaixa" << endl;
	    else 
		cout << "nao encaixa" << endl;
	}
	return 0;
}
