// Use malloc() to allocate structure memory dynamically and print details.
// Student allocated dynamically with details: Tina 105 88
// Name: Tina | Roll: 105 | Marks: 88
// Memory for structure is dynamically allocated on heap using malloc()

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *st;

    // dynamically allocate memory for one Student
    st = (struct Student *)malloc(sizeof(struct Student));
    if (st == NULL) {
        return 0;   // allocation failed
    }

    // Input format (example):  Tina 105 88
    scanf("%s %d %d", st->name, &st->roll, &st->marks);

    // Output format:
    printf("Name: %s | Roll: %d | Marks: %d", st->name, st->roll, st->marks);

    // free allocated memory
    free(st);
    return 0;
}