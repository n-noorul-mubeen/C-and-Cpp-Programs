#include <stdio.h>
int sort(int array[],int n){
    int i,j,element;
    for (i=1;i<n;i++) { 
        element=array[i];
        j = i - 1;
        while (j>=0 && array[j]>element) { 
            array[j+1]=array[j]; 
            j=j-1; 
        } 
        array[j+1]=element; 
    
    }
    for (i=0;i<n;i++) {
        printf("%d\n",array[i]);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;++i){
        scanf("%d",&array[i]);
    }
    printf("The sorted array is: \n");
    sort(array,n);
    

    return 0;
}
