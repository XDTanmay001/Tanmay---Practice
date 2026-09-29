#include <stdio.h>
int main(){
    int m;
    printf("Enter your marks : ");
    scanf("%d",&m);
    
    if(m>=90) printf("Your grade is A+");
    else if (m<90 && m>=80) printf("Your grade is A");
    else if (m<80 && m>=70) printf("Your grade is A");
    else if (m<70 && m>=60) printf("Your grade is B+");
    else printf("Your grade is B");

    return 0;
}