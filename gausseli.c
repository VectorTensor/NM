#include <stdio.h>
#include <math.h>
int main(){

	int r;
	printf("Enter the row and column of the matrix\n");
	scanf("%d",&r);
	float A[20][20];
	printf("Enter data \n");
	for (int i =0;i<r;i++){
		for (int j=0;j<r;j++){
			scanf("%f",&A[i][j]);
		}
	}
	printf("Enter data base \n");
	for(int i=0;i<r;i++){
		scanf("%f",&A[i][r]);

	}
	printf("Initial matraix \n");
	for (int i =0;i<r;i++){
		for (int j=0;j<r+1;j++){
			printf("%f\t",A[i][j]);
		}
		printf("\n");
	}
	float x=0,y=0;
	for (int i =0;i<r;i++){
		x=A[i][i];
		for (int j=i+1;j<r;j++){
			y=A[j][i];
			for(int k=i;k<=r;k++){
				A[j][k]=A[j][k]-A[i][k]*(y/x);
			}
		}
	}
	printf("After calc\n");
	for (int i =0;i<r;i++){
		for (int j=0;j<r+1;j++){
			printf("%f\t",A[i][j]);
		}
			printf("\n");
	}
	float a[20];
	a[r-1]=A[r-1][r]/A[r-1][r-1];
//	printf("%f",a[r-1]);
	for (int i=r-2;i>=0;i--){
		a[i]=0;
		for(int j=r-1;j>i;j--){
			a[i]=a[i]+A[i][j]*a[j];
		}
		a[i]=(A[i][r]-a[i])/A[i][i];
	}
	for(int i=0;i<r;i++){
		printf("%f\n",a[i]);

	}
	return 0;
}





















