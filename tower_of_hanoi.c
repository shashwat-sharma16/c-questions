#include <stdio.h>
void tower(int n, char s, char h, char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c\n", s,d);// very important
    tower(n-1,h,s,d);
    return;
}
int main() {
    int x ;
    printf("enter number of disks\n ");
    scanf("%d",&x);
    tower(x,'A','B','C');
    return 0;
}
