#include <stdio.h>
int main() {
    char ch;
    printf("Enter a letter : ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("It is a vowel");
    else
        printf("Consonant");

    return 0;
}