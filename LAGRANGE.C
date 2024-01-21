//find f(5.5) for the given data using lagrange interpolation formula
//x 0 2 3 5 7
//f(x)1 47 91 251 477
#include<math.h>
#include<stdio.h>
main()
{
 float x[15],y[15],sum=0.0,X,prod;
 int i,j,n;
 printf("\t\t Output\n");
 printf("\nEnter the no. of points: ");
 scanf("%d",&n);
 printf("enter the value of X at which y is reqd. ");
 scanf("%f",&X);
 printf("Enter the values of x and y :\n");
 printf("\nx\ty=f(x)\n");
 for(i=1;i<=n;i++)
 scanf("%f\t%f",&x[i],&y[i]);
 for(i=1;i<=n;i++)
 {
 prod=y[i];
 for(j=1;j<=n;j++)
 {
 if(j!=i)
 prod=prod*(X-x[j])/(x[i]-x[j]);
 }
 sum=sum+prod;
 }
 printf("\n At x=%f,\n \n y=%f",X,sum);
}

// OUTPUT:

                 Output

Enter the no. of points: 5
enter the value of X at which y is reqd. 5.5
Enter the values of x and y :

x       y=f(x)
0       2
2       47
3       97
5       251
7       477

 At x=5.500000,
 
 y=300.718750
