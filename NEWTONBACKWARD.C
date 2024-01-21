//find the value of(2.9)
//x 2.0 2.2 2.4 2.6 2,8 3.0
//f(x) 15.68 17.65 19.52 21.30 23.33 25.62
#include<math.h>
#include<stdio.h>
main()
{
 float x[15],y[15],X,p=1,u,h,d;
 int i,j,k,n;
 printf("\t\t Output\n");
 printf("\nEnter the no. of points: ");
 scanf("%d",&n);
 printf("enter the value of X at which y is reqd ");
 scanf("%f",&X);
 printf("Enter the values of x and y :\n");
 printf("x\ty=f(x)\n");
 for(i=1;i<=n;i++)
 scanf("%f\t%f",&x[i],&y[i]);
 h=x[2]-x[1];
 printf("h= %f\n",h);
 u=(X-x[n])/h;
 printf("u= %f \n",u);
 d=y[n];
 for(k=1;k<n;k=k+1)
 {
 for(j=n;j>=k+1;j=j-1)
 {
 y[j]=y[j]-y[j-1];
 printf("\n y=%f \n",y[j]);
 }
 p=p*(u+k-1)/k;
 d=d+p*y[n];
 printf("\n d=%f \n",d);
 }
 printf("\n\nThe result of Newtons backward interpolation\n");
 printf("y(%1.2f)=%3.5f",X,d);
}








//OUTPUT


                 Output

Enter the no. of points: 6
enter the value of X at which y is reqd 2.9
Enter the values of x and y :
x       y=f(x)
2.0     15.68
2.2     17.65
2.4     19.52
2.6     21.30
2.8     23.53
3.0     25.62
h= 0.200000
u= -0.499999 

 y=2.090000 

 y=2.230001 

 y=1.779999 

 y=1.870001 

 y=1.969999 

 d=24.575003 

 y=-0.140001 

 y=0.450003 

 y=-0.090002 

 y=-0.099998 

 d=24.592503 

 y=-0.590004 

 y=0.540005 

 y=0.009996 

 d=24.629377 

 y=-1.130009 

 y=0.530008 

 d=24.673519 

 y=-1.660017 

 d=24.718910 


The result of Newtons backward interpolation
y(2.90)=24.71891
