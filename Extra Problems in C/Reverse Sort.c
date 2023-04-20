#include <stdio.h>

void sort(int a[],int n) {
	int x,y,tmp;
	for (x=0;x<n-1;x++) {
		for (y=x+1;y<n;y++) {
			if (a[x]>a[y]) {
				tmp = a[x];
				a[x]=a[y];
				a[y]=tmp;
			}
		}
	}
}

void reverse(int a[],int n) {
	int x,tmp;
	for (x=0;x<n/2;x++) {
		tmp = a[x];
		a[x] = a[n-x-1];
		a[n-x-1] = tmp;
	}
}

int main() {
	int x,n;
	scanf("%d",&n);
	int arr[n];
	for (x=0;x<n;x++) {
		scanf("%d",&arr[x]);
	}
	sort(arr,n);
	for (x=0;x<n;x++) printf("%d ",arr[x]);
	reverse(arr,n);
	printf("\n");
	for (x=0;x<n;x++) printf("%d ",arr[x]);
}
