/*Question:
Get the elements of two 3X3 matrix in row-wise and perform matrix multiplication of those two matrices. Display the resulted matrix. 

Sample Input:

10(first matrix entries row-wise)
20
10
4
5
6
2
3
5
3(second matrix entry row-wise)
2
4
3
3
9
4
4
2

Sample Result:

130(resulted matrix)
120
240
51
47
73
35
33
45*/

#include <stdio.h>
int main() {
    int i,j,k;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (j=0;j<3;j++) {
        for (i=0;i<3;i++) {
            scanf("%d",&b[j][i]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            c[i][j]=0;
            for (k=0;k<3;k++) {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d\n",c[i][j]);
        }
    }
    return 0;
}
