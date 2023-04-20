#include <stdio.h>
void insertionSort(int array[], int n) 
{ 
    int i, element, j; 
    for (i = 1; i < n; i++) {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element) { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = element; 
    } 
}

int main(){
  int n, i;
  scanf("%d",&n);
  int A[n];
  printf("Enter the elements in array:\n");
  for(i=0;i<n;++i){
    scanf("%d",&A[i]);
  }
  insertionSort(A,n);
  printf("The Sorted Array is:\n");
  for(i=0;i<n;++i){
    scanf("%d",&A[i]);
  }
}
