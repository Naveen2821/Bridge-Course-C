//student report card
#include <stdio.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks[5];
    float total;
    float average;
} Student;
Student inputStudent(void) {
    Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    s.total = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        s.total += s.marks[i];
    }
    s.average = s.total / 5;
    return s;
}
int totalMarks(Student s) {
    return s.total;
}
double averageMarks(Student s) {
    return s.average;
}
void output(Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", s.marks[i]);
    }
    printf("\nTotal Marks: %.2f\n", s.total);
    printf("Average Marks: %.2f\n", s.average);
}
int main() {
    Student s = inputStudent();
    output(s);
    printf("Total Marks: %d\n", totalMarks(s));
    printf("Average Marks: %.2f\n", averageMarks(s));
    return 0;
}