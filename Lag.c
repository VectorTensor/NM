#include <stdio.h>

#define max 5
int main(){
	int n;
	float x[max],ip,y[max];
	printf("Enter number of data \n");
	scanf("%d",&n);
	printf("Enter data\n");
	for (int i=0;i<max;i++){
		scanf("%f %f",&x[i],&y[i]);
		
	}
	printf("Enter interpolating point\n");
	scanf("%f",&ip);
	float yp=0;
	for (int i=0; i<n;i++){
		float p=1;
		for(int j=0;j<n;j++){
			if(i!=j){
				p=p*(ip-x[j])/(x[i]-x[j]);
				
			}

		}
		yp=yp+p*y[i];

	}
	printf("The interpolation is %f\n",yp);
	return 0;
	

}






























