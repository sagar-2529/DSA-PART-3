#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[100];
    int semester;
    struct Student* link; 
};

int main() {
    struct Student *head = (struct Student *)malloc(sizeof(struct Student));
    

    head->roll_no = 1;
    strcpy(head->name, "sagar");
    head->semester = 2;
    head->link = NULL;
 
    printf("Student list:\n");
    printf("Roll No: %d\n", head->roll_no);
    printf("Name: %s\n", head->name);
    printf("Semester: %d\n", head->semester);


    return 0;
}
