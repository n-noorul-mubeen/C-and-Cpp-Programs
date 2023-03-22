#include <stdio.h>

void multi_mat(int m, int n, int o, int ar_a[m][n], int ar_b[n][o]){
    int i, j, k, ar_m[m][o];
    
    printf("Enter the elements of array 1:\n");
    
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            scanf("%d",&ar_a[i][j]);
        }
    }
    
    printf("Enter the elements of array 2:\n");
    
    for(i=0;i<n;++i){
        for(j=0;j<o;++j){
            scanf("%d",&ar_b[i][j]);
        }
    }
    
    printf("The elements of the resultant array from the multiplication of array 1 and array 2:\n");
    for(i=0;i<m;++i){
        
        for(j=0;j<o;++j){
            ar_m[i][j]=0;
            for(k=0;k<n;++k){
                ar_m[i][j]+=ar_a[i][k]*ar_b[k][j];
            }
            printf("%d ",ar_m[i][j]);
        }
        printf("\n");
        
    }
    
}

int main()
{
    int n,m,o,i,j,k,sum;

    printf("Enter the number of rows of matrix 1: ");
    scanf("%d",&m);
    
    printf("Enter the number of columns of matrix 1(same as number of rows of matrix 1): ");
    scanf("%d",&n);
    
    printf("Enter the number of columns of matrix 2: ");
    scanf("%d",&o);
    
    
    int ar_a[m][n];
    int ar_b[n][o];
    
    multi_mat(m, n, o, ar_a, ar_b);
    
    return 0;
}

