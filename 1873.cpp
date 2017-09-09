#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	string st1,st2;
	int n;

	cin>>n;
	while(n){
	cin>>st1>>st2;

	if(st1=="tesoura" && st2=="tesoura"){
	printf("empate\n");
	}else{
	if(st1=="tesoura" && st2=="spock"){
	printf("sheldon\n");
	}else{
	if(st1=="tesoura" && st2=="pedra"){
	printf("sheldon\n");
	}else{
	if(st1=="tesoura" && st2=="papel"){
	printf("rajesh\n");
	}else{
	if(st1=="tesoura" && st2=="lagarto"){
	printf("rajesh\n");
	}else{
	if(st1=="papel" && st2=="tesoura"){
	printf("sheldon\n");
	}else{
	if(st1=="papel" && st2=="spock"){
	printf("rajesh\n");
	}else{
	if(st1=="papel" && st2=="pedra"){
	printf("rajesh\n");
	}else{
	if(st1=="papel" && st2=="papel"){
	printf("empate\n");
	}else{
	if(st1=="papel" && st2=="lagarto"){
	printf("sheldon\n");
	}else{
	if(st1=="pedra" && st2=="tesoura"){
	printf("rajesh\n");
	}else{
	if(st1=="pedra" && st2=="spock"){
	printf("sheldon\n");
	}else{
	if(st1=="pedra" && st2=="papel"){
	printf("sheldon\n");
	}else{
	if(st1=="pedra" && st2=="pedra"){
	printf("empate\n");
	}else{
	if(st1=="pedra" && st2=="lagarto"){
	printf("rajesh\n");
	}else{
	if(st1=="spock" && st2=="tesoura"){
	printf("rajesh\n");
	}else{
	if(st1=="spock" && st2=="spock"){
	printf("empate\n");
	}else{
	if(st1=="spock" && st2=="papel"){
	printf("sheldon\n");
	}else{
	if(st1=="spock" && st2=="pedra"){
	printf("rajesh\n");
	}else{
	if(st1=="spock" && st2=="lagarto"){
	printf("sheldon\n");
	}else{
	if(st1=="lagarto" && st2=="tesoura"){
	printf("sheldon\n");
	}else{
	if(st1=="lagarto" && st2=="papel"){
	printf("rajesh\n");
	}else{
	if(st1=="lagarto" && st2=="pedra"){
	printf("sheldon\n");
	}else{
	if(st1=="lagarto" && st2=="spock"){
	printf("rajesh\n");
	}else{
	if(st1=="lagarto" && st2=="lagarto"){
	printf("empate\n");
	}else{
		break;
		}		}		}		}			}			}			}			}		}		}	}		}		}		}		}		}		}		}		}		}		}		}		}		}	}	
	n--;
	}	
	return 0;
}
