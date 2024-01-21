//find the value of(2.1) from the following table
//x 2.0 2.2 2.4 2.6 2.8
//f(x) 16.56 21.78 32.56 41.97 52.68
#include<stdio.h>
#include<math.h>
int main()
{
	float x[15],y[15],X,p=1,s,h,d;  
	int i,j,n;
	printf("\t\t Output\n");
	printf("\n Enter the number of points: ");
	scanf("%d",&n);
	printf("\n Enter the value of X at which y required ");
	scanf("%f",&X);
	printf("\n Enter the value of x & y:\n\n");
	printf("\n x \t\t y=f(x)\n");
	for(i=1;i<=n;i++)
	scanf("%f%f",& x[i],&y[i]);
	h=x[2]-x[1];
	printf("\n h= %f\n",h);
	s=(X-x[1])/h;
	d=y[1];
	printf("s=%f,\t d=%f",s,d);
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			y[j]=y[j+1]-y[j];
			printf("\n%f\n",y[j]);
		}
		p=p*(s-i+1)/i;
		d=d+p*y[1];
	}
	printf("\n\n The result is: \n\n");
    printf("y(%1.2f)=%3.5f",X,d);
    return 0;
}

//OUTUT

                 Output

 Enter the number of points: 5

 Enter the value of X at which y required 2.1

 Enter the value of x & y:


 x               y=f(x)
2               16.56
2.2             21.78
2.4             32.56
2.6             41.97
2.8             52.68

 h= 0.200000
s=0.499999,      d=16.559999
5.220001

10.780001

9.410000

10.709999

5.559999

-1.370001

1.299999

41.970001

-6.930000

2.670000

40.670002

10.709999

9.600000

38.000000

-29.960003

41.970001


 The result is: 

y(2.10)=17.66687
