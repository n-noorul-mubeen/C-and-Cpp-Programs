#include <stdio.h>

int happy(int n) {
  int tmp=n;
  int last;
  int hap=0;
  while (tmp > 0) {
    last = tmp%10;
    hap += last*last;
    tmp /= 10;
  }
  return hap;
}

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d",&n);
  int n_copy = n;
  while (happy(n_copy) >= 10 || happy(n_copy) < 0) {
    n_copy = happy(n_copy);
    /* printf("%d\n",n_copy); */
  }

  (happy(n_copy)==1) ? printf("%d is a Happy number",n) : printf("%d is not a Happy number",n);

  return 0;
}
