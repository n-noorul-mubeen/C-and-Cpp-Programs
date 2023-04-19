/*Question
Given the size and the elements of an array, sort it in ascending order.

Input:

Size

Elements of the array one below the other

Output:

Sorted array one below the other*/

//Code

#include <stdio.h>
int main(){
    int n, i,p,j,z;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (a[i]>a[j]){
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    for (i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
}
