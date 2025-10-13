// Program to Count characters in a string
#include <stdio.h>
int main() {
    char str[100];
    int count = 0, i = 0;
    fgets(str, 100, stdin); // Supports spaces
    while (str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}
// Program to Print each character on a new line
#include <stdio.h>
int main() {
    char str[100];
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c\n", str[i]);
    return 0;
}
// Program to Count vowels and consonants 
#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    fgets(str, 100, stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
// Program to Convert lowercase to uppercase without built-in
#include <stdio.h>
int main() {
    char str[100];
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("%s\n", str);
    return 0;
}
// Program to Reverse a string 
#include <stdio.h>
int main() {
    char str[100];
    int len = 0;
    fgets(str, 100, stdin);
    while (str[len] != '\0' && str[len] != '\n')
        len++;
    for (int i = len-1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
// Program to Check if palindrome
#include <stdio.h>
int main() {
    char str[100];
    int len = 0, flag = 1;
    fgets(str, 100, stdin);
    while (str[len] != '\0' && str[len] != '\n')
        len++;
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
// Program to Count spaces, digits, special characters (
#include <stdio.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0, i = 0;
    fgets(str, 100, stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
        i++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial: %d\n", spaces, digits, special);
    return 0;
}
//Program to Replace spaces with hyphens
#include <stdio.h>
int main() {
    char str[100];
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }
    printf("%s\n", str);
    return 0;
}
// Program to Count frequency of a character.
#include <stdio.h>
int main() {
    char str[100], ch;
    int freq = 0, i = 0;
    fgets(str, 100, stdin);
    scanf("%c", &ch);
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            freq++;
        i++;
    }
    printf("Frequency: %d\n", freq);
    return 0;
}
// 

