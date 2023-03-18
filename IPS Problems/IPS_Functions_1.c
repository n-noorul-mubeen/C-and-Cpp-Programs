/*Write a C code using functions to find the lcm of two numbers using functions
Input format:
number
number 2
Output format:
LCM of the two numbers is to be printed*/
#include <stdio.h>
int lcm(int n1, int n2){
    int i,k;
    if (n1<n2){
        k=n2;
    }
    else{
        k=n1;
    }

    while(1){
        if((k%n1==0)&&(k%n2==0)){
            break;
        }
        ++k;
    }
    return k;
}

void main(){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",lcm(a,b));
}
