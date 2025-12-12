#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Days d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day %d\n", d);
    }

    return 0;
}
#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    enum Traffic signal = RED;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else
        printf("Go\n");

    return 0;
}
#include <stdio.h>

enum Month {
    JAN=1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m = FEB;

    switch (m) {
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("31 days\n");
    }

    return 0;
}
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s = FAILURE;

    switch (s) {
        case SUCCESS: printf("Operation successful.\n"); break;
        case FAILURE: printf("Operation failed.\n"); break;
        case TIMEOUT: printf("Operation timed out.\n"); break;
    }

    return 0;
}
#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    printf("1.Add 2.Subtract 3.Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:       printf("Result = %d\n", a + b); break;
        case SUBTRACT:  printf("Result = %d\n", a - b); break;
        case MULTIPLY:  printf("Result = %d\n", a * b); break;
        default:        printf("Invalid choice.\n");
    }

    return 0;
}
#include <stdio.h>

enum Numbers { A=10, B, C, D };

int main() {
    printf("%d %d %d %d\n", A, B, C, D);
    return 0;
}
#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    printf("1.Add 2.Subtract 3.Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:       printf("Result = %d\n", a + b); break;
        case SUBTRACT:  printf("Result = %d\n", a - b); break;
        case MULTIPLY:  printf("Result = %d\n", a * b); break;
        default:        printf("Invalid choice.\n");
    }

    return 0;
}
#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    printf("1.Add 2.Subtract 3.Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:       printf("Result = %d\n", a + b); break;
        case SUBTRACT:  printf("Result = %d\n", a - b); break;
        case MULTIPLY:  printf("Result = %d\n", a * b); break;
        default:        printf("Invalid choice.\n");
    }

    return 0;
}
#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    printf("1.Add 2.Subtract 3.Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:       printf("Result = %d\n", a + b); break;
        case SUBTRACT:  printf("Result = %d\n", a - b); break;
        case MULTIPLY:  printf("Result = %d\n", a * b); break;
        default:        printf("Invalid choice.\n");
    }

    return 0;
}
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;

    switch (r) {
        case ADMIN: printf("Welcome Admin.\n"); break;
        case USER:  printf("Hello User.\n"); break;
        case GUEST: printf("Guest Access.\n"); break;
    }

    return 0;
}
#include <stdio.h>

enum Data { X, Y, Z };

int main() {
    enum Data a = X, b = Y, c = Z;

    printf("%d %d %d\n", a, b, c);
    return 0;
}
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p = {"Rohan", 20, MALE};

    printf("Name: %s\nAge: %d\n", p.name, p.age);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}

