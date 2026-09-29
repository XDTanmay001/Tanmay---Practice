#include <stdio.h>
int main(){
    int n,att;
    printf("Have you paid the fees (enter 1 if yes ) : ");
    scanf("%d",&n);
    printf("What is your attendence (in percentage) : ");
    scanf("%d",&att);
     if (n==1) {

        if (att>=75) printf("You are eligible for giving exam ");

        else printf("You are not eligible for giving exam ");
     }
     
     else printf("You are not eligible for giving exam");
     
}