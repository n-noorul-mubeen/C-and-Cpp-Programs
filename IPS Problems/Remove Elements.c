/*Question:
Get an array of integers display them.
Then, remove duplicates from the array and display:
i).the removed elements that comes after the first occurance (one below the other).
ii). the revised array after removal*/

//Code:
#include <stdio.h>
int main(){
    int n, count=0, i,j;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        i<n-1?printf("%d, ",a[i]):printf("%d\n",a[i]);
    }
    int b[n];
    int c[n];
    int k=0;
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (a[i]==a[j]&&a[j]!=0){
                /*c[k]=a[i];
                k++;*/
                printf("%d\n", a[j]);//douplicates
                a[j]=0;
            }
        }
    }
    for (i=0;i<n;i++){
        if (a[i]!=0){
            b[k]=a[i];
            k++;
            //printf("%d, ",a[i]);
        }
        
    }
    for (i=0;i<k;i++){
        i<k-1?printf("%d, ", b[i]):printf("%d",b[i]);
    }
