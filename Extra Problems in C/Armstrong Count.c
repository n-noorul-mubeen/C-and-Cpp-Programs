include <stdio.h>

int power(int x, int y) {
  int i;
  int res = 1;
  for (i=0;i<y;i++){
    res = res*x;
  }
  return res;
}

int len_num(int n) {
  int c=0;
  int tmp=n;
  while (tmp>0) {
    c += 1;
    tmp /= 10;
  }
  return c;
}

int isArmstrong(int n) {
  int tmp = n;
  int arm=0;
  int res=0;
  int l = len_num(n);
  int last;
  while (tmp>0) {
    last = tmp%10;
    arm += power(last,l);
    tmp /= 10;
  }
  if (arm==n) {
    res = 1;
  }
  else {
    res = 0;
  }
  return res;
}

int main() {
  int n;
  int am_count=0,non_am_count=0;
  do {
    scanf("%d",&n);
    if (isArmstrong(n)==1) am_count += 1;
    else non_am_count += 1;
  } while (n != -1);

  printf("Armstrong: %d\n",am_count);
  printf("Non Armstrong: %d",non_am_count-1);
}
