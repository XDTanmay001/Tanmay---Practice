#include <stdio.h>
int main(){
    int password=1234;
    for (int i;i<=3;i++){
        int n;
        printf("Enter password : ");
    
    scanf("%d",&n);
    if (n==password){ printf("Correct password");
    break;
    }
    else printf("Incorrect password\n");

    }
    return 0;
}