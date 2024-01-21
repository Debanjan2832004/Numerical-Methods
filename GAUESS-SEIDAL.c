//find the root of the equation by gauss seidal method upto 15 iteration
//8x1-3x2+2x3=20
//4x1-11x2-x3=33
//x1+x2+4x3=9
#include <math.h>
#include <stdio.h>

int main() {
    int n, m, i, j, k;
    float a[20][20], x[20], s;

    printf("Order of matrix A and number of iterations: ");
    scanf("%d %d", &n, &m);

    printf("\nEnter the elements of augmented matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter the initial approximation:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    for (k = 1; k <= m; k++) {
        for (i = 0; i < n; i++) {
            s = a[i][n];
            for (j = 0; j < n; j++) {
                if (j != i) {
                    s -= a[i][j] * x[j];
                }
            }
            x[i] = s / a[i][i];
            printf("x[%d] = %6.4f\t", i + 1, x[i]);
        }
        printf("\n");
    }

    printf("\n\nThe solution is:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %6.4f\n", i + 1, x[i]);
    }

    return 0;
}




//OUTPUT:

Order of matrix A and number of iterations: 3
15

Enter the elements of augmented matrix:
8
-3
2
20
4
-11
-1
33
1
1
4
9
Enter the initial approximation:
0
0
0
x[1] = 2.5000   x[2] = -2.0909  x[3] = 2.1477
x[1] = 1.1790   x[2] = -2.7665  x[3] = 2.6469
x[1] = 0.8008   x[2] = -2.9494  x[3] = 2.7871
x[1] = 0.6972   x[2] = -2.9999  x[3] = 2.8257
x[1] = 0.6686   x[2] = -3.0137  x[3] = 2.8363
x[1] = 0.6608   x[2] = -3.0176  x[3] = 2.8392
x[1] = 0.6586   x[2] = -3.0186  x[3] = 2.8400
x[1] = 0.6580   x[2] = -3.0189  x[3] = 2.8402
x[1] = 0.6579   x[2] = -3.0190  x[3] = 2.8403
x[1] = 0.6578   x[2] = -3.0190  x[3] = 2.8403
x[1] = 0.6578   x[2] = -3.0190  x[3] = 2.8403
x[1] = 0.6578   x[2] = -3.0190  x[3] = 2.8403
x[1] = 0.6578   x[2] = -3.0190  x[3] = 2.8403
x[1] = 0.6578   x[2] = -3.0190  x[3] = 2.8403
x[1] = 0.6578   x[2] = -3.0190  x[3] = 2.8403


The solution is:
x[1] = 0.6578
x[2] = -3.0190
x[3] = 2.8403
