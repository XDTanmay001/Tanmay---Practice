#include <stdio.h>
int main(){
    float a,b;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    a++ , b--;
    printf("%f\n",a);
    printf("%f",b);
    return 0;
}