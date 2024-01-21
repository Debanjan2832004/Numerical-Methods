//find hte root of the equation by gauss elimination method
//2x1 +x2+x3=4
//x1-x2+2x3=2
//2x1-2x2-x3=3
#include <stdio.h>
#include <math.h> 
int main() {
    int n, i, j, k;
    float a[20][20], x[20], s = 0.0, m;
    printf("Enter the order of coefficient matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of augmented matrix row-wise:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++)
            scanf("%f", &a[i][j]);
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i != j) {
                m = a[j][i] / a[i][i];
                for (k = 1; k <= n + 1; k++) {
                    a[j][k] -= m * a[i][k];
                }
            }
        }
    }
    printf("\nThe upper triangular matrix is:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++)
            printf("%f\t", a[i][j]);
        printf("\n");
    }
    x[n] = a[n][n + 1] / a[n][n];
    for (i = n - 1; i >= 1; i--) {
        s = 0;
        for (j = i + 1; j <= n; j++)
            s = s + (a[i][j] * x[j]);
        x[i] = (a[i][n + 1] - s) / a[i][i];
    }
    printf("\nThe solution is: \n");
    for (i = 1; i <= n; i++)
        printf("\nx%d = %f\t", i, x[i]); 
    return 0;
}



Enter the order of coefficient matrix: 3
Enter the elements of augmented matrix row-wise:
2 1 1 4
1 -1 2 2 
2 2 -1 3

The upper triangular matrix is:
2.000000        0.000000        0.000000        2.000000
0.000000        -1.500000       0.000000        -1.500000
0.000000        0.000000        -1.000000       -1.000000

The solution is: 

x1 = 1.000000
x2 = 1.000000
x3 = 1.000000 
