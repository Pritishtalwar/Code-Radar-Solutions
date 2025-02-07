#include <stdio.h>
#include<ctype.h>

int main() {
    char ch
    scanf(" %c", &ch);
    if(isalpha(ch)) {
        char lower_ch =tolower(ch);
        if (lower_ch =='a' || lower_ch =='e' || lower_ch =='i' || lower_ch == 'o' || lower_ch =='u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }

    else if (isdigit(ch)) {
        printf("Digit");
    }

    else {
        printf("Special Character");
    }
    return 0;
}