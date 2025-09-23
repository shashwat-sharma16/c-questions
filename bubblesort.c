#include <stdio.h>
int main () 
{
int s,i,j,t,a[50],x;
printf("enter size\n");
scanf("%d",&s);
for(i=0;i<s;i++)
{
printf("enter elements of the array\n ");
scanf("%d",&a[i]);
}
for(i=0;i<s-1;i++)
{
for(j=0 ; j<s-1 ; j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<s;i++)
{
printf("%d\n",a[i]);
}
return(0);
}
