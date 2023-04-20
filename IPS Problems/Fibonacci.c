#include <stdio.h>
int fibo(int n);
int main(){
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}
int fibo(int n){
    int a=-1;
    int b=1;
    int c;
    int x=-1;
    int y=1;
    int z;
    int i;
    int j;
    int s1=0;
    int s2=0;
    for (i=1;i<100;i++){
        c=a+b;
        a=b;
        b=c;
        if (c==n){
            j=i;
        }
    }
    int k;
    for (k=0;k<j;k++){
        z=x+y;
        x=y;
        y=z;
        if (k%2==0){
            s2+=z;
        }
        else {
            s1+=z;
        }
        if (k==j-1){
            printf("%d",z);
        
        }
        else{
            printf("%d, ",z);
        }
    
    }
    printf("\n%d",s1);
    printf("\n%d",s2);
    
    return 0;
}
