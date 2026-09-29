#include <stdio.h>
int main(){

    float a,b;
    int n;
    printf("Enter value of a : ");
    scanf("%f",&a);

     printf("Enter value of b : ");
    scanf("%f",&b);

    printf("What you want to perform, Enter number according to it");
    printf("\n(1 for addition)\n (2 for subtraction)\n");
    printf("(3 for multiplication)\n (4 for division) : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Addition of a and b is : %f",a+b);
        break;

    
    case 2:
    printf("Subtraction of a and b is : %f",a-b);
        break;

        case 3:
        printf("Multiplication of a and b is : %f",a*b);
        break;

    
    case 4:
    if(b==0) printf("not defined");
    else printf("Division of a and b is :%f",a/b);
        break;
    }
    return 0; 
}