#include<stdio.h>
#include<math.h>
#define f(x,y) (y*y-x*x)/(y*y+x*x)
int main(){
	float x0,y0,xn;
	int n;
	printf("integration x0, y0,number of steps& calculation point\n");
	scanf("%f %f %d %f",&x0,&y0,&n,&xn);
	float h;
	h=(xn-x0)/n;
	float m1,m2,m3,m4,m,yn;
	for (int i=0;i<n;i++){
		m1=f(x0,y0);
		m2=f(x0+h/2,y0+m1*h/2);
		m3=f(x0+h/2,y0+m2*h/2);
		m4=f(x0+h,y0+m3*h);
		m=(m1+2*(m2+m3)+m4)/6;
		yn=y0+m*h;
		x0=x0+h;
		y0=yn;	
	}
	printf("%f\n",yn);
	return 0;
}

































