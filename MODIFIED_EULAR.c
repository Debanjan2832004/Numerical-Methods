//find the value of y(0.8) of the defferential equation dy/dx=x+y,y(0)=1 with the step size h=0.1 and accuracy=0.001

# include<stdio.h>
# include<math.h>
float f(float x,float y)
{
float f;
f=x/y;
return(f);
}
main()
{
int i,n;
float x0,y0,xn,h,x,x1,y,y1,y11,e;
printf(" \n enter the value of x0 ,y0 ");
scanf("%f%f",&x0,&y0);
printf(" \n enter the value of xn for which y is required ");
scanf("%f",&xn);
printf(" \n enter the step size ");
scanf("%f",&h);
printf("\nEnter the correction term e ");
scanf("%f",&e);
printf(" \n the value of y=%f at x=%f ",y0,x0);
do
{
y1=y0+h*f(x0,y0);
do
{
y11=y1;
y1=y0+h*(f(x0,y0)+f(x0+h,y11))/2.0;
printf(" \n the value of y=%f at x=%f ",y1,x0);
}while(fabs(y1-y11)>e);
x0=x0+h;
y0=y1;
printf(" \n the value of y=%f at x=%f ",y0,x0);
}while(x0<=xn);
}

/*
enter the value of x0 ,y0 0
1

 enter the value of xn for which y is required 0.8

 enter the step size 0.1

Enter the correction term e 0.001

 the value of y=1.000000 at x=0.000000
 the value of y=1.005000 at x=0.000000
 the value of y=1.004975 at x=0.000000
 the value of y=1.004975 at x=0.100000
 the value of y=1.019803 at x=0.100000
 the value of y=1.019756 at x=0.100000
 the value of y=1.019756 at x=0.200000
 the value of y=1.043994 at x=0.200000
 the value of y=1.043930 at x=0.200000
 the value of y=1.043930 at x=0.300000
 the value of y=1.076944 at x=0.300000
 the value of y=1.076870 at x=0.300000
 the value of y=1.076870 at x=0.400000
 the value of y=1.117884 at x=0.400000
 the value of y=1.117806 at x=0.400000
 the value of y=1.117806 at x=0.500000
 the value of y=1.165977 at x=0.500000
 the value of y=1.165901 at x=0.500000
 the value of y=1.165901 at x=0.600000
 the value of y=1.220383 at x=0.600000
 the value of y=1.220312 at x=0.600000
 the value of y=1.220312 at x=0.700000
 the value of y=1.280300 at x=0.700000
 the value of y=1.280236 at x=0.700000
 the value of y=1.280236 at x=0.800000
--------------------------------
Process exited after 24.83 seconds with return value 41
Press any key to continue . . .
*/
