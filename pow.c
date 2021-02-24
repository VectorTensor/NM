#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	bool loop=true;
	float e;
	printf("Enter error\n");
	scanf("%f",&e);
	float lmd_old=0, A[10][10],x[10],Y[10],lmd_new=0;
	int n;
	printf("Enter order of equation\n");	
	scanf("%d",&n);
	printf("Enter the data\n");
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%f",&A[i][j]);
		}
	}
	printf("Enter guess matrix\n");
	do{

	
	for(int i=0;i<n;i++){
		scanf("%f",&x[i]);

	}
	for(int i =0;i<n;i++){
		Y[i]=0;
		for(int j=0;j<n;j++){
			Y[i]=Y[i]+A[i][j]*x[j];
		}
	}
	float largest=Y[0];
	for(int i=0;i<n-1;i++){
		if (fabs(Y[i+1])>fabs(largest)){
			largest=Y[i+1];
		}

	}
	lmd_new=fabs(largest);
//	printf("%f\n",largest);
	for(int i=0;i<n;i++){
		x[i]=Y[i]/largest;
	}

	float m=0;
	m=lmd_old-lmd_new;
	if(fabs(m)>e){
		lmd_old=lmd_new;
	}
	else{
		loop=false;
	}
//	printf("Loop\n");	
		
	
	}while(loop);
	printf("The eigen value is %f\n",lmd_new);
	printf("The eigen vector is \n");
	for(int i=0;i<n;i++){
		printf("%f\n",x[i]);
	}
}































