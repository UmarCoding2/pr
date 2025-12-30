// // #include <stdio.h>
// // void main()
// // {

//     // int muaz=54655;
//     // int ayesha = -54655;

//     // float muaz = 324.32;
//     // float ayesha =-324.32;4

//     // printf("%f or %f", muaz, ayesha);

//     // char c;
//     // printf("enter a cahracter: ");
//     // c= getche();
//     // printf("\n%d",c);

//     // printf("enter a number=");
//     // scanf("%d%d",&a,&b);
//     // printf("the number is = %d",a+b);
//     // printf("this is \t muaz \n it is a student of class noting \n\a he is not good at\b studides ");

// //     int a, b, c;

// //     printf("\nEnter 1 for add \nEnter 2 for subtract \nEnter 3 for multiply \nEnter 4 for division \n");
// //     printf("Enter your choice: ");
// //     scanf("%d", &c);

// //     if (c == 1)
// //     {

// //         printf("Enter two numbers for addition: ");
// //         scanf("%d%d", &a, &b);
// //         printf("The sum is = %d", a + b);
// //     }
// //     if (c == 2)
// //     {

// //         printf("Enter two numbers for subtraction: ");
// //         scanf("%d%d", &a, &b);
// //         printf("The difference is = %d", a - b);
// //     }
// //     if (c == 3)
// //     {

// //         printf("Enter two numbers for multiplication : ");
// //         scanf("%d%d", &a, &b);
// //         printf("The product is = %d", a * b);
// //     }
// //     if (c == 4)
// //     {

// //         printf("Enter two numbers for division: ");
// //         scanf("%d%d", &a, &b);
// //         printf("The quotient is = %d", a / b);
// //     }

// //     if (c != 1 && c != 2 && c != 3 && c != 4)
// //     {
// //         printf("Invalid choice");
// //     }

// // }

// // #include <stdio.h>
// // #include <string.h>

// // #define MAX_STUDENTS 100

// // struct Student {
// //     int id;
// //     char name[50];
// //     float grade;
// // };

// // void addStudent(struct Student students[], int *count) {
// //     if (*count >= MAX_STUDENTS) {
// //         printf("Cannot add more students. Maximum limit reached.\n");
// //         return;
// //     }
// //     printf("Enter student ID: ");
// //     scanf("%d", &students[*count].id);
// //     printf("Enter student name: ");
// //     scanf("%s", students[*count].name);
// //     printf("Enter student class: ");
// //     scanf("%f", &students[*count].grade);
// //     (*count)++;
// //     printf("Student added successfully!\n");
// // }

// // void viewStudents(struct Student students[], int count) {
// //     if (count == 0) {
// //         printf("No students to display.\n");
// //         return;
// //     }
// //     printf("\nStudent Records:\n");
// //     for (int i = 0; i < count; i++) {
// //         printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
// //     }
// // }

// // void deleteStudent(struct Student students[], int *count) {
// //     int id, found = 0;
// //     printf("Enter student ID to delete: ");
// //     scanf("%d", &id);
// //     for (int i = 0; i < *count; i++) {
// //         if (students[i].id == id) {
// //             found = 1;
// //             for (int j = i; j < *count - 1; j++) {
// //                 students[j] = students[j + 1];
// //             }
// //             (*count)--;
// //             printf("Student with ID %d deleted successfully!\n", id);
// //             break;
// //         }
// //     }
// //     if (!found) {
// //         printf("Student with ID %d not found.\n", id);
// //     }
// // }

// // int main() {
// //     struct Student students[MAX_STUDENTS];
// //     int count = 0, choice;

// //     do {
// //         printf("\nStudent Management System\n");
// //         printf("1. Add Student\n");
// //         printf("2. View Students\n");
// //         printf("3. Delete Student\n");
// //         printf("4. Exit\n");
// //         printf("Enter your choice: ");
// //         scanf("%d", &choice);

// //         switch (choice) {
// //             case 1:
// //                 addStudent(students, &count);
// //                 break;
// //             case 2:
// //                 viewStudents(students, count);
// //                 break;
// //             case 3:
// //                 deleteStudent(students, &count);
// //                 break;
// //             case 4:
// //                 printf("Exiting the program.\n");
// //                 break;
// //             default:
// //                 printf("Invalid choice! Please try again.\n");
// //         }
// //     } while (choice != 4);

// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     // int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     // for(int i = 1;                i <= 100000//;          i++)
//     {
//         printf("%d    x       %d =     %d\n",     a,     i,       a * i);
//     }

#include <stdio.h>
void main()

{
  int a;
  printf("enter a number ");
  scanf("%d", &a);
  printf("the number is %d", a);
}
