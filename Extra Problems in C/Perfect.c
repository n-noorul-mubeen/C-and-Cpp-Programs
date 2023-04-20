#include <stdio.h>

int main() {
  int x;
  printf("Enter x: ");
  scanf("%d",&x);
  int y;
  int z=0;
  for (y=1;y<x;y++) {
    if (x%y==0) z += y;
  }
  if (z==x) printf("%d is a perfect number",x);
  else printf("%d is not a perfect number",x);
} 
