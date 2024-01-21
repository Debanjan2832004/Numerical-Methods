// find the value of integration 1 & 3 (x+1/x)dx taking 10 subinterval using trapezodial rule

#include<math.h>
#include<stdio.h>
float f(float x)
{
 float f;
 f=(x+1/x);
 return(f);
}
 main()
 {
 float a,b,h,trap;
 int n,i,k;
 printf("Value of a,b,n ");
 scanf("%f%f%d",&a,&b,&n);
 h=(b-a)/n;
 trap=f(a)+f(b);
 for(k=1;k<=n-1;k++)
 {
 trap=trap+2*f(a+h*k);
 }
 trap=trap*h/2;
 printf("\n Result=%f",trap);
 }



 //OUTPUT
 
Value of a,b,n 1 10 30

 Result=51.809948
