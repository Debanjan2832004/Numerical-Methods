//find the value of y(0.8) of the defferential equation dy/dx=x+y,y(0)=1 with the step size h=0.1 and accuracy=0.0001

# include<stdio.h>
# include<math.h>
float f(float x,float y)
{
float f;
f=x+y;
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

Enter the correction term e 0.0001

 the value of y=1.000000 at x=0.000000
 the value of y=1.110000 at x=0.000000
 the value of y=1.110500 at x=0.000000
 the value of y=1.110525 at x=0.000000
 the value of y=1.110525 at x=0.100000
 the value of y=1.242630 at x=0.100000
 the value of y=1.243183 at x=0.100000
 the value of y=1.243210 at x=0.100000
 the value of y=1.243210 at x=0.200000
 the value of y=1.399747 at x=0.200000
 the value of y=1.400358 at x=0.200000
 the value of y=1.400389 at x=0.200000
 the value of y=1.400389 at x=0.300000
 the value of y=1.583930 at x=0.300000
 the value of y=1.584605 at x=0.300000
 the value of y=1.584638 at x=0.300000
 the value of y=1.584638 at x=0.400000
 the value of y=1.798025 at x=0.400000
 the value of y=1.798772 at x=0.400000
 the value of y=1.798809 at x=0.400000
 the value of y=1.798809 at x=0.500000
 the value of y=2.045184 at x=0.500000
 the value of y=2.046009 at x=0.500000
 the value of y=2.046050 at x=0.500000
 the value of y=2.046050 at x=0.600000
 the value of y=2.328885 at x=0.600000
 the value of y=2.329797 at x=0.600000
 the value of y=2.329842 at x=0.600000
 the value of y=2.329842 at x=0.700000
 the value of y=2.652976 at x=0.700000
 the value of y=2.653983 at x=0.700000
 the value of y=2.654033 at x=0.700000
 the value of y=2.654033 at x=0.800000
--------------------------------
Process exited after 10.96 seconds with return value 41
Press any key to continue . . .
*/
