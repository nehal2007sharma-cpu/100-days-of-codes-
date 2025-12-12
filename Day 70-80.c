C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf().
After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int age;
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);
    fclose(fp);
    printf("Data successfully saved to info.txt\n");
    return 0;
}
C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>
int main() {
    FILE *fp;
    char line[200];
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }
    printf("Contents of info.txt:\n\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
  #include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) 
        characters++;
        if (ch == '\n')
            lines++;
        // Count words
        if (!isspace(ch)) {
            if (inWord == 0) {
                words++;
                inWord = 1;   // Now inside a word
            }
        } else {
            inWord = 0;       // Outside word
        }
    }
    fclose(fp);
    printf("Total Characters: %d\n", characters);
    printf("Total Words     : %d\n", words);
    printf("Total Lines     : %d\n", lines);

    return 0;
}
#include <stdio.h>
int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Source file not found!\n");
        return 1;
    }
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully.\n");
    fclose(src);
    fclose(dest);
    return 0;
}
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200], filename[50];

    printf("Enter filename to open in append mode: ");
    scanf("%s", filename);
    getchar();  // To consume newline

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("\nFile content:\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    printf("File converted to uppercase successfully.\n");

    fclose(in);
    fclose(out);
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fp);
    return 0;
}
#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    printf("Sum = %d\n", sum);

    if (count > 0)
        printf("Average = %.2f\n", (float)sum / count);
    else
        printf("No numbers found.\n");

    fclose(fp);
    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Reading the file
    fp = fopen("students.txt", "r");
    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}

