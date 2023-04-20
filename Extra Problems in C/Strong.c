#include <stdio.h>

int factorial(int n) {
  int a,b=1;
  for (a=1;a<=n;a++) b *= a;
  return b;
}

int main() {
  int c,d;
  printf("\nInput lower and upper limits: ");
  scanf("%d,%d",&c,&d);
  int e;
  int f;
  for (e=c;e<=d;e++) {
    int g=0;
    f = e;
    while (f>0) {
      g += factorial(f%10);
      f /= 10;
    }
    if (g==e) printf("%d is a strong number\n",e);
  }
  return 0;
}
