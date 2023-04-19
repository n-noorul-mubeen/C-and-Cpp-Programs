/*Question:
Get the size "N" and the "N" elements of a array.
Find the largest number from the array.
input will contain:
i) value of n
ii) n elements of the array (one below the other)

Output:
i)n elements of the array (one below the other)
ii) The largest number: 
the answer for the largest number*/

//Code:

#include <stdio.h>

int main() {
  int n,i;
  scanf("%d (N value)",&n);
  int a[n];
  for (i=0;i<n;i++) {
    scanf("%d",&a[i]);
  }
  printf("The array:\n");
  int j;
  for (j=0;j<n;j++) {
    printf("%d\n",a[j]);
  }
  int max;
  max = a[0];
  for (i=0;i<n;i++) {
    if (a[i]>max) {
      max = a[i];
    }
  }
  printf("The largest number:\n");
  printf("%d",max);
  return 0;
}
