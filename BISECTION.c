//find the root of the equation x3-9x+1=0 by usingbisection method correct upto 3 decimal places.
#include <stdio.h>
#include <math.h>
float f(float x) 
{
    return x*x*x - 9*x + 1;
}
int main()
{
    float e,a,b,c;
    int k=0;
    printf("Enter the value of accuracy: ");
    scanf("%f",&e);
    do
    {
        printf("Enter the value of a and b: ");
        scanf("%f%f",&a,&b);
    }
    while(f(a)*f(b)>0);
    do{
        c=(a+b)/2;
        
        printf("k=%d \t a=%f \t b=%f \t c=%f \t f(c)=%f \n",k,a,b,c,f(c));
        if (f(a)*f(c)<0)
            b=c;
        else
            a=c;
        k++;
    }
    while(fabs(f(c))>e);
    printf("The root of the equation is %f",c);
    printf("\nNumber of iterations: %d",k);
    return 0;
}









//OUTPUT:

//Enter the value of accuracy: 0.0001
//Enter the value of a and b: 0
//1
//k=0      a=0.000000      b=1.000000      c=0.500000      f(c)=-3.375000 
//k=1      a=0.000000      b=0.500000      c=0.250000      f(c)=-1.234375 
//k=2      a=0.000000      b=0.250000      c=0.125000      f(c)=-0.123047 
//k=3      a=0.000000      b=0.125000      c=0.062500      f(c)=0.437744 
//k=4      a=0.062500      b=0.125000      c=0.093750      f(c)=0.157074 
//k=5      a=0.093750      b=0.125000      c=0.109375      f(c)=0.016933 
//k=6      a=0.109375      b=0.125000      c=0.117188      f(c)=-0.053078 
//k=7      a=0.109375      b=0.117188      c=0.113281      f(c)=-0.018078 
//k=8      a=0.109375      b=0.113281      c=0.111328      f(c)=-0.000573 
//k=9      a=0.109375      b=0.111328      c=0.110352      f(c)=0.008180 
//k=10     a=0.110352      b=0.111328      c=0.110840      f(c)=0.003803 
//k=11     a=0.110840      b=0.111328      c=0.111084      f(c)=0.001615 
//k=12     a=0.111084      b=0.111328      c=0.111206      f(c)=0.000521 
//k=13     a=0.111206      b=0.111328      c=0.111267      f(c)=-0.000026 
//The root of the equation is 0.111267
//Number of iterations: 14
