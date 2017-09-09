#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	string st1,st2;
	int n,num=1;

	cin>>n;
	while(n){
	cin>>st1>>st2;

	if(st1=="tesoura" && st2=="tesoura"){
	printf("Caso #%d: De novo!\n",num);
	}else{
	if(st1=="tesoura" && st2=="Spock"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="tesoura" && st2=="pedra"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="tesoura" && st2=="papel"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="tesoura" && st2=="lagarto"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="papel" && st2=="tesoura"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="papel" && st2=="Spock"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="papel" && st2=="pedra"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="papel" && st2=="papel"){
	printf("Caso #%d: De novo!\n",num);
	}else{
	if(st1=="papel" && st2=="lagarto"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="pedra" && st2=="tesoura"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="pedra" && st2=="Spock"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="pedra" && st2=="papel"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="pedra" && st2=="pedra"){
	printf("Caso #%d: De novo!\n",num);
	}else{
	if(st1=="pedra" && st2=="lagarto"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="Spock" && st2=="tesoura"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="Spock" && st2=="Spock"){
	printf("Caso #%d: De novo!\n",num);
	}else{
	if(st1=="Spock" && st2=="papel"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="Spock" && st2=="pedra"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="Spock" && st2=="lagarto"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="lagarto" && st2=="tesoura"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="lagarto" && st2=="papel"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="lagarto" && st2=="pedra"){
	printf("Caso #%d: Raj trapaceou!\n",num);
	}else{
	if(st1=="lagarto" && st2=="Spock"){
	printf("Caso #%d: Bazinga!\n",num);
	}else{
	if(st1=="lagarto" && st2=="lagarto"){
	printf("Caso #%d: De novo!\n",num);
	}else{
		break;
		}		}		}		}			}			}			}			}		}		}	}		}		}		}		}		}		}		}		}		}		}		}		}		}	}	
	num++;
	n--;
	}	
	return 0;
}
