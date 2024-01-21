//find the root of the equation x3-x-1=0 correct upto 3 decimal places using newton raphson method
#include <math.h>
#include <stdio.h>

float f(float x) {
    return (x * x * x - x - 1);
}

float df(float x) {
    return (3 * x * x - 1);
}

int main() {
    float a, b, c, e;
    int k = 0;

    printf("\n Enter accuracy e=");
    scanf("%f", &e);

    do {
        printf("\n Enter interval a, b: ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0.0);

    c = (a + b) / 2;

    do {
        c = c - (f(c) / df(c));
        printf("\n k=%d \t c=%f\t f(c)=%f", k, c, f(c));
        k = k + 1;
    } while (fabs(f(c)) >= e);

    printf("\n\n Root of the Equation is %f\n\n", c);
    printf("\n No. of iterations = %d", k);

    return 0;
}


//Output:
// Enter accuracy e=0.0001
// Enter interval a, b: 1 2
//k=0     c=1.347826      f(c)=0.100682
 //k=1     c=1.325200      f(c)=0.002059
 //k=2     c=1.324718      f(c)=0.000001

 //Root of the Equation is 1.324718
