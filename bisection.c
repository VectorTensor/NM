#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
// Define function

#define f(x) pow(x,3)+3*x-5
int main(){
	float a,b,f2,f1,f0;
	float e,x0;
	bool loop=true;
	printf("Enter upper and lower guess\n");
	scanf("%f %f",&a,&b);
	printf("Enter tolerable error\n");
	scanf("%f",&e);
	
	f1=f(a);
	f2=f(b);
	if(f1*f2>0){
		printf("Mathematical error");
		return 0;
	}
	while(loop){
		x0=(a+b)/2;
		f0=f(x0);
		if (f1*f0<0){
			b=x0;
			f2=f0;
		}	
		else{
			a=x0;
			f2=f0;
			
		}
		if (abs(f0)<e){
			loop=false;
		}
	}		
	printf("The root is %f",x0);
	return 0;


}
































