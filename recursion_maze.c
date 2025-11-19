#include <stdio.h>
int maze(int i, int j , int a, int b){
    if(i==a && j==b) return 1;
    int rightways = 0;
    int downways =0;
    if(i==a){
       rightways += maze(i+1,j,a,b);
    }
    if(j==b){
        downways += maze(i,j+1,a,b);
    }
    if(i<a && j<b){
          rightways += maze(i+1,j,a,b);
          downways += maze(i,j+1,a,b);
    }
    int tways = rightways +downways;
    return tways;
}
int main() {
    int m,n ;
    printf("enter the rows and cloumns of the grid\n ");
    scanf("%d \t %d",m,n);
    printf("enter the coordinates of grid youre trying to reach :\n");
    printf(" the number of ways you can reach the grid are %d",maze(1,1,m,n));
    return 0;
}
