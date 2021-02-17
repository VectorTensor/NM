#include <stdio.h>
int main(){
	int n;
	float b,a;
	printf("Enter number of data\n");
	scanf("%d",&n);
	float x[10],y[10];
	printf("Enter data\n");
	for(int i=0;i<n;i++){
		scanf("%f %f",&x[i],&y[i]);
	}
	float sumx=0,sumx2=0,sumy=0,sumxy=0;
	for(int i=0;i<n;i++){
		sumx=sumx+x[i];
		sumx2=sumx2+(x[i]*x[i]);
		sumy=sumy+y[i];
		sumxy=sumxy+(x[i]*y[i]);
	}
	b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	a=(sumy-b*sumx)/n;
	printf("a=%f b=%f",a,b);
	return 0;
}




































