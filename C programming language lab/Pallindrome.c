#include <stdio.h>
int main(){

    int n,remainder,reverse=0,temp;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp = n;

     while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
     }
    if (reverse == temp) printf("It is a pallindrome");
    else printf("not a pallindrome");
    return 0;

}
