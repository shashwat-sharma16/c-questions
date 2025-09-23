#include <stdio.h>
int main () 
{
int s,i,in,e,a[50];
printf("enter size\n");
scanf("%d",&s);
for(i=0;i<s;i++)
{
printf("enter elements of the array\n ");
scanf("%d",&a[i]);
}
printf("enter element to insert\n");
scanf("%d",&e);
printf("enter index to insert in\n");
scanf("%d",&in);
for(i=s-1;i>=in;i--)
{
a[i+1]=a[i];
}
a[in]=e;
s++;
for(i=0;i<s;i++)
{
printf("%d\n",a[i]);
}
return(0);
}
