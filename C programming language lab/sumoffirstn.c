#include <stdio.h>
int main()
{
    int n, sum = 0, k=1;
    printf("Enter value of n : ");
    scanf("%d", &n);

    // for (int i=1;i<=n;i++){
    //     sum= sum + i;
    //     ;
    // }
    // printf("%d",sum);
    
    while (k <= n)
    {
        sum = sum + k;
        k++;
    }
    printf("%d", sum);
    return 0;
}