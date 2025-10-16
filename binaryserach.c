#include <stdio.h>
int main () 
{
int a[5]={10,20,35,40,50};
int b,e,m;
b=0, e=4;
int n;
printf("enter number to find\n");
scanf("%d",&n);
while(b<=e)
{
m=(b+e)/2;
if(n==a[m])
{
    printf("number is at index %d",m);
break;
}
else if(n<a[m])
{
    e=m-1;
}
else if(n>a[m])
{
    b=m+1;
}
}
return 0;
}
