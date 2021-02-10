#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define f(x) 3*x-cos(x)-1
#define g(x) 3+sin(x)


int main(){
	float a,x0,f0,g0;
	float e;
	int  N;
	printf("Enter initial guess \n");
	scanf("%f",&x0);
	printf("Enter tolerable error \n");
	scanf("%f",&e);
	printf("Enter iteration \n");
	scanf("%d",&N);
	int step=1;
	do {
		g0=g(x0);
		f0=f(x0);
//		printf("f\n");	
		if (g0==0){
			printf("mathematical error !!!\n");

			return 0;
		}
		a=x0-(f0/g0);
		x0=a;
		step++;
			if (step>N){
				printf("Not converged\n");
				return 0;
			}
		
		
	}while(fabs(f(a))>e);
	printf("the root is %f",a);
	return 0;
		
}
