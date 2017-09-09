#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,i,num;
	string st1;

	scanf("%d",&n);
	while(n){
		cin>>st1;
		num=0;
		for(i=0;i<st1.length();i++){
			if(st1[i]=='1'){		
				num=num+2;
			}else{
			if(st1[i]=='2'){		
				num=num+5;
			}else{
			if(st1[i]=='3'){		
				num=num+5;
			}else{
			if(st1[i]=='4'){		
				num=num+4;
			}else{
			if(st1[i]=='5'){		
				num=num+5;
			}else{
			if(st1[i]=='6'){		
				num=num+6;
			}else{
			if(st1[i]=='7'){		
				num=num+3;
			}else{
			if(st1[i]=='8'){		
				num=num+7;
			}else{
			if(st1[i]=='9'){		
				num=num+6;
			}else{
				num=num+6;		
		}						}							}							}							}					}					}							}						}
		}
	printf("%d leds\n",num);
	n--;
	}
	return 0;
}
