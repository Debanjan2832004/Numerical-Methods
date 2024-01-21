//evaluate integration 0 & 1 (dx/1+2x) using weddle rule taking n=18
#include <stdio.h>
#include <math.h>
float f(float x)
{
    float f;
    f=(1/(1+2*x));
    return f;
}
main()
{
    float a,b,h,wed,y[30],w1=0,w2=0,w3=0,w4=0;
    int i,n;
    printf("\n Enter the value of a,b,n:");
    scanf("%f%f%d",&a,&b,&n);
    h=(b-a)/n;
    for(i=0;i<=n;i++)
    {
        y[i]=f(a);
        a=a+h;
    }
    for(i=0;i<=n-6;i+=6)
    {
        w1=w1+y[i+1]+y[i+5];
        w2=w2+y[i+2]+y[i+4];
        w3=w3+y[i+3];
    }
    for (i=0;i<=n-12;i+=6)
    {
        w4=w4+y[i+6];
    }
    wed=((3*h/10)*(y[0]+y[n]+5*w1+w2+6*w3+2*w4));
    printf("\n The result is %f",wed);
}



//OUTPUT


 Enter the value of a,b,n:0
1
18

 The result is 0.549306
