#include <stdio.h>
#include <math.h>
float f(float x)
{
    return x*x*x - 5*x + 1;
}
int main()
{
    float e,a,b,c;
    int k=0;
    printf("Enter the value of accuracy: ");
    scanf("%f",&e);
    do{
        printf("Enter the value of a and b: ");
        scanf("%f%f",&a,&b);
    }
    while(f(a)*f(b)>0);
    do{
        c=b-(f(b)*(b-a))/(f(b)-f(a));
        printf("\n k=%d a=%f b=%f c=%f f(c)=%f",k,a,b,c,f(c));
        if (f(a)*f(c)<0)
            b=c;
        else
            a=c;
        k++;
    }
    while(fabs(f(c))>e);
    printf("\n\nThe root of the equation is %f",c);
    printf("\n\nThe number of iterations is %d",k);
    return 0;
}







//OUTPUT

//Enter the value of accuracy: 0.0001
//Enter the value of a and b: 0
//1

 //k=0 a=0.000000 b=1.000000 c=0.250000 f(c)=-0.234375
 //k=1 a=0.000000 b=0.250000 c=0.202532 f(c)=-0.004351
 //k=2 a=0.000000 b=0.202532 c=0.201654 f(c)=-0.000072

//The root of the equation is 0.201654

//The number of iterations is 3
