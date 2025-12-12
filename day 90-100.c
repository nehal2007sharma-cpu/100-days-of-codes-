#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n",
           s.name, s.roll_no, s.marks);

    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nAll Students:\n");
    for (i = 0; i < 5; i++) {
        printf("%s %d %.2f\n",
               s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, topIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }

    printf("\nTop Student:\n");
    printf("%s %d %.2f\n",
           s[topIndex].name, s[topIndex].roll_no, s[topIndex].marks);

    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",
           s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s = {"Ravi", 10, 89.5};
    printStudent(s);
    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, top = 0;
    for (i = 1; i < n; i++)
        if (s[i].marks > s[top].marks)
            top = i;
    return s[top];
}

int main() {
    struct Student s[3] = {
        {"A", 1, 78},
        {"B", 2, 90},
        {"C", 3, 85}
    };

    struct Student top = getTopStudent(s, 3);

    printf("Top Student: %s %d %.2f\n",
           top.name, top.roll_no, top.marks);

    return 0;
}
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"Rahul", 101, {12, 5, 2020}};

    printf("Name: %s\nID: %d\nJoining Date: %d-%d-%d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Ravi", 101, 50000};
    struct Employee e2;

    FILE *fp = fopen("employee.dat", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Name: %s\nID: %d\nSalary: %.2f\n",
           e2.name, e2.id, e2.salary);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Aman", 1, 90};
    struct Student s2 = {"Aman", 1, 90};

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks)
        printf("Both structures are identical.\n");
    else
        printf("Structures are different.\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printf("\nStudent Details:\n");
    printf("%s %d %.2f\n", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;          
    struct Student *ptr;       

    ptr = &s;  
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);
    printf("\nStudent Details:\n");
    printf("Name : %s\n", ptr->name);
    printf("Roll : %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
