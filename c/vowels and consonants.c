#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]); 
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
