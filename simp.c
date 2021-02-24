#include <stdio.h>

#include<stdbool.h>
#include <math.h>
#define f(x) x
int main(){
	float l,u;
	int n;
	printf("Enter lower limit,upper limit and sub interval:\n");
	scanf("%f %f %d",&l,&u,&n);
	float step_size=(u-l)/n;
	float inte;
	inte=f(l)+f(u);
	float k;
	for(int i=1;i<n;i++){
		k=l+i*step_size;
		if (i%2==0){
			inte=inte+2*f(k);
		}
		else{
			inte=inte+4*f(k);
		}
		
	}
	inte=inte*step_size/3;
	printf("%f",inte);
	return 0;
}





























