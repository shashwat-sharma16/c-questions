#include <stdio.h>
int main () 
{
int s,i,in,a[50];
printf("enter size\n");
scanf("%d",&s);
for(i=0;i<s;i++)
{
printf("enter elements of the array\n ");
scanf("%d",&a[i]);
}
printf("enter index to delete \n");
scanf("%d",&in);
for(i=s-1;i>in;i--)
{
a[i-1]=a[i];
}
s--;
for(i=0;i<s;i++)
{
printf("%d\n",a[i]);
}
return(0);
}
