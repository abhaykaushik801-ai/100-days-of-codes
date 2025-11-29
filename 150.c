// Use pointer to struct to modify and display data using -> operator
// Student pointer modifying values: John 106 91
// Modified Data: Name: John | Roll: 106 | Marks: 91
// Pointer to structure accesses and modifies data using the arrow (->) operator


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s, *ptr;
    ptr = &s;

    // Input example: John 106 91
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Output format
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}