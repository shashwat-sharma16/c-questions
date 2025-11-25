#include<stdio.h>
int sum(int a){
    int sum = 0;
    while(a>0){
    sum = sum + (a%10);
    a=a/10;
    }

return sum;
}
int main(){
    printf("enter the number whose digits to find sum of :");
    int x;
    scanf("%d",&x);
    printf("%d",sum(x));
    return 0;
}
