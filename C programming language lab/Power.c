#include <stdio.h>
int main(){
    int a,b,ans=1;
    printf("Enter value of a and b : ");
    scanf("%d %d",&a,&b);

    for(int i;i<=b;i++){
        ans *= a;
    }
    printf("a to the power b is : %d ",ans);
}