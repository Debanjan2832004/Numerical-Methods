// Runge-kutta method order 4
//find the value of y(1.2) of the differential equation dy/dx=x2+y2,y(0)=1 taking step size of 0.2
#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float f;
	f=x+y;
	return (f);
}
main()
{
	int i,n;
	float x0,y0,xn,h,k,k1,k2,k3,k4;
	printf("\n Enter the value of x0,y0,xn,h:");
	scanf("%f%f%f%f",&x0,&y0,&xn,&h);
	n=(xn-x0)/h;
	for(i=1;i<=n;i++)
{
k1=h*f(x0,y0);
k2=h*f(x0+h/2.0,y0+k1/2.0);
k3=h*f(x0+h/2.0,y0+k2/2.0);
k4=h*f(x0+h,y0+k3);
k=(k1+2*k2+2*k3+k4)/6.0;
x0=x0+h;
y0=y0+k;
printf("\n Enter the value of y=%f at x=%f",y0,x0);
}
}






/*OUTPUT
Enter the value of x0,y0,xn,h:0
1
1.2
0.2

 Enter the value of y=1.242800 at x=0.200000
 Enter the value of y=1.583636 at x=0.400000
 Enter the value of y=2.044213 at x=0.600000
 Enter the value of y=2.651042 at x=0.800000
 Enter the value of y=3.436502 at x=1.000000
 Enter the value of y=4.440144 at x=1.200000
--------------------------------
Process exited after 43.16 seconds with return value 0
Press any key to continue . . .
*/

