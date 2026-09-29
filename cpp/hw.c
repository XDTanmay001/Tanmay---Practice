#include <stdio.h>
int main(){
int i = 4, j = -1,k=0,w,x,y,z;
w = i||j||k;
x = i&&j&&k;
y = i||j&&k;
z = i&&j||k;
printf("\nw = %d x = %d",y,z);
printf(" y = %d z = %d",y,z);
}
