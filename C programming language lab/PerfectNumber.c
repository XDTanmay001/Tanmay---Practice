#include <stdio.h>
int main() {
     int n, perfect = 0;
     printf("Enter a number: ");
     scanf("%d", &n);

    for (int i=1;i<n;i++) {

        if (n%i == 0) {
            perfect += i;
        }
    }

    if (perfect == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);

    return 0;
}