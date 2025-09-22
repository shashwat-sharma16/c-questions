#include <stdio.h>
int main () 
{
int i,j;
int k=4;
int a[5],b[5];
for(i=0;i<=4;i++)
{
printf("enter value for index %d \n",i);
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
b[i]=a[k];
k--;
}
for(j=0;j<=4;j++)
{
printf("%d\n", b[j]);
}
return(0);
}
