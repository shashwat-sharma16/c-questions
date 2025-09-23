#include <stdio.h>
int main () 
{
int s,i,a[50];
printf("enter size for array 1\n");
scanf("%d",&s);
for(i=0;i<s;i++)
{
printf("enter elements of the array\n ");
scanf("%d",&a[i]);
}
int n,j,b[50];
printf("enter size for array 2\n");
scanf("%d",&n);
for(j=0;j<n;j++)
{
printf("enter elements of the array\n ");
scanf("%d",&b[j]);
}
int t=n+s;
int c[t],k;
for(k=0;k<s;k++)
{
c[k]=a[k];
}
for (k = s, j = 0; k < t && j < n; k++, j++) {
c[k] = b[j];
}
printf("\nCombined array:\n");
for (k = 0; k < t; k++) 
{
printf("%d\n", c[k]);   
}
return(0);
}
