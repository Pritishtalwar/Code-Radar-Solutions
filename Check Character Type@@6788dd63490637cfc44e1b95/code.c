#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    scanf("%c",&ch);

    if(isdigit(ch)) {
        printf("Digit\n");
    } else if(isalpha(ch)) {
        char lower = tolower(ch);

        if (lower =='o'||lower =='a'||lower =='e'||lower =='i'||lower =='u'){
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    else{
            printf("Special Character");
        }
return 0;
    }
}