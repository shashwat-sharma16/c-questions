#include <stdio.h>
int main () 
{
int s,i,t,a[50],x;
printf("enter size\n");
scanf("%d",&s);
for(i=0;i<s;i++)
{
printf("enter elements of the array\n ");
scanf("%d",&a[i]);
}
for(i=0;i<s-1;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
for(i=0;i<s;i++)
{
printf("%d\n",a[i]);
}
return(0);
}
