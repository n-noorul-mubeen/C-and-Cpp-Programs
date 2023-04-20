#include <stdio.h>

void main() {
  int x,y;
  int i;
  printf("Enter lower limit: ");
  scanf("%d",&x);
  printf("Enter upper limit: ");
  scanf("%d",&y);
  for (i=x;i<=y;i++) {
    int arm=0,ld,tmp=i;
    while (tmp>0) {
      ld = tmp%10;
      arm += ld*ld*ld;
      tmp/=10;
    }
    if (arm==i) printf("%d\n",i);
  }
}
