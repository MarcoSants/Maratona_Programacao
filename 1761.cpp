#include <iostream>
#include <cstdio>
#include <cmath>
#define pi 3.141592654
using namespace std;

int main(){
	double soma,hip,ca,a,b,c;

	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
		hip=tan(a*pi/180.0);
		ca=b*hip;
		soma=(ca+c)*5; 
		printf("%.2lf\n",soma);
	}
	return 0;
}

