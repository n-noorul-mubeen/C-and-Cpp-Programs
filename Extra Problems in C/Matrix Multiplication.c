
int main()
{
    int n,m,o,i,j,k,sum;
    int ar_a[m][n];
    int ar_b[n][o];
    printf("Enter the number of rows of matrix 1: ");
    scanf("%d",&m);
    
    printf("Enter the number of columns of matrix 1(same as number of rows of matrix 1): ");
    scanf("%d",&n);
    
    printf("Enter the number of columns of matrix 2: ");
    scanf("%d",&o);
    
    printf("Enter the elements of matrix 1:\n");
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            scanf("%d",&ar_a[i][j]);
        }
    }
    printf("Enter the elements of matrix 2:\n");
    for(i=0;i<n;++i){
        for(j=0;j<o;++j){
            scanf("%d",&ar_a[i][j]);
        }
    }
    int ar_a[m][n]={{1,2,3},{4,5,6},{7,8,9}};
    int ar_b[n][o]={{10,11,12},{13,14,15},{16,17,18}};
    
    for(i=0;i<3;++i){
        
        for(j=0;j<3;++j){
            sum=0;
            for(k=0;k<3;++k){
                sum+=ar_a[i][k]*ar_b[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
        
    }
    
    

    return 0;
}
