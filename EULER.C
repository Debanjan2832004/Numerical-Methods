//given dy/dx=x+y, y(0)=1 find y for x=0.8 by eular method taking steplength h=0.1
#include <stdio.h>
#include <math.h>
float f(float x, float y)
{
    float f;
    f = (x + y);
    return f;
}
main()
{
    float x0, y0, xn, h, y1;
    printf("\n Enter the value of x0,y0,xn,h:");
    scanf("%f%f%f%f", &x0, &y0, &xn, &h);
    do {
        y1 = y0 + h * f(x0, y0);
        x0 = x0 + h;
        y0 = y1;
        printf("\n The value of y(%f)=%f", x0, y0);
    } while (x0 <= xn);
}




// Enter the value of x0,y0,xn,h:0
//1
//0.8
//0.1

 //The value of y(0.100000)=1.100000
 //The value of y(0.200000)=1.220000
 //The value of y(0.300000)=1.362000
 //The value of y(0.400000)=1.528200
 //The value of y(0.500000)=1.721020
 //The value of y(0.600000)=1.943122
 //The value of y(0.700000)=2.197434
 //The value of y(0.800000)=2.487178[1]
