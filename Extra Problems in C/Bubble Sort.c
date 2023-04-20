#include <stdio.h>

void bubbleSortExample(int arr[], int num){
    int x, y, temp;   
    for(x = 0; x < num - 1; x++){
        for(y = 0; y < num - x - 1; y++){    
            if(arr[y] > arr[y + 1]){
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
}

int main(){

    int n, x;  

    printf("Enter the Number of Elements you want in the array: ");
    scanf("%d", &n);    
    int A[n];
    printf("Enter the Value of Elements: ");
    for(x = 0; x < n; x++)
        scanf("%d", &arr[x]);    
    bubbleSortExample(arr, n);
    printf("Array after implementing bubble sort: ");    
    for(x = 0; x < n; x++){
        printf("%d  ", arr[x]);
    }   
    return 0;

}
