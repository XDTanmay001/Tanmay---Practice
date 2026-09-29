#include <stdio.h>
int main(){
    float c,f;
    printf("Enter value in degree celsius : ");
    scanf("%f",&c);
    f = (9*c)/5 + 32;
    printf("Farenheit value : %f",f);
    

    return 0;
}