// Program to Remove all vowels from a string.
#include <stdio.h>
int main() {
    char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
              ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')) {
            result[j++] = ch;
        }
    }
    result[j] = '\0';
    printf("String without vowels: %s", result);
    return 0;
}
// Program to Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};  
    int i;
    char ans = '\0';
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                ans = ch;
                break;
            }
        }
    }
    if (ans != '\0')
        printf("First repeating lowercase alphabet: %c\n", ans);
    else
        printf("No repeating lowercase alphabet found.\n");
    return 0;
}
// Program to Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int freq[256] = {0}, i;
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }
    for (i = 0; s1[i] != '\0'; i++)
        freq[(unsigned char)s1[i]]++;
    for (i = 0; s2[i] != '\0'; i++)
        freq[(unsigned char)s2[i]]--;
    for (i = 0; i < 256; i++)
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    printf("Strings are anagrams\n");
    return 0;
}
// Program to Find the longest word in a sentence
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50] = "";
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
        if (str[i] == '\0') break;
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
// Program to Check if one string is rotation of another
#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100], temp[200];
    printf("Enter string 1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter string 2: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
//Program to Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100], temp[200];
    printf("Enter string 1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter string 2: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
//Program to Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverse(char *l, char *r) {
    while (l < r) {
        char temp = *l;
        *l = *r;
        *r = temp;
        l++; r--;
    }
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int i = 0, start = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str + start, str + i - 1);
            start = i + 1;
        }
        if (str[i] == '\0') break;
        i++;
    }
    printf("Output: %s\n", str);
    return 0;
}
// Program to Print the initials of a name.
#include <stdio.h>
int main() {
    char name[200];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ') printf("%c.", name[0]);

    for (int i = 1; name[i] != '\0'; i++)
        if (name[i-1] == ' ' && name[i] != ' ')
            printf("%c.", name[i]);

    return 0;
}
// Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main() {
    char name[200];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ') printf("%c.", name[0]);

    for (int i = 1; name[i] != '\0'; i++)
        if (name[i-1] == ' ' && name[i] != ' ')
            printf("%c.", name[i]);

    return 0;
}
// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char date[20], month[4] = "Apr";
    printf("Enter date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);
    char dd[3], yyyy[5];
    strncpy(dd, date, 2);
    dd[2] = '\0';
    strncpy(yyyy, date + 5, 4);
    yyyy[4] = '\0';
    printf("%s-%s-%s\n", dd, month, yyyy);
    return 0;
}
// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
// 
