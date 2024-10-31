append.c
1)structure pointer sorting
// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>
// Creating Structure Student
struct student {
    char name[30];
    int roll;
    float marks;
};
// variable of structure with pointer defined
typedef struct student Student;
int main()
{
    int i,j,n;
    Student *students[10];
    // Taking inputs
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the student details:\n");
    for (i = 0; i < n; i++) {
        students[i] = (Student *)malloc(sizeof(Student));
        printf("Name: ");
        scanf("%s", students[i]->name);
        printf("Roll: ");
        scanf("%d", &students[i]->roll);
        printf("Marks: ");
        scanf("%f", &students[i]->marks);
    }
    // Sorting
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            /*Sorting by marks
                if (students[j]->marks > students[j+1]->marks) {
                Student temp = *students[j];
                *students[j] = *students[j+1];
                *students[j+1] = temp;
                }*/
            //Sorting by Name
            if(strcmp(students[j]->name, students[j+1]->name)>0){
                Student temp = *students[j];
                *students[j] = *students[j+1];
                *students[j+1] = temp;
                }
            }
        }
    //Displaying record
    printf("Sorted by Name:\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%f\n", students[i]->name, students[i]->roll, students[i]->marks);
    }

    for (i = 0; i < n; i++) {
        free(students[i]);
    }
    return 0;
}




2)//pasing structure to finction
#include <stdio.h>
// student structure
struct student {
  int roll;
  char name[64];
  int age;
};
// function declaration
void displayDetail(struct student s);
int main(void) {
  struct student std;
  printf("Enter detail of student\n");
    printf("Enter RollNo: ");
    scanf("%d", &std.roll);
    printf("Enter name: ");
    scanf("%s", std.name);
    printf("Enter age: ");
    scanf("%d", &std.age);
  displayDetail(std);
  return 0;
}
// function definition
void displayDetail(struct student st) {
    printf("Detail of student\n");
    printf("Roll No.: %d\n", st.roll);
    printf("Name: %s\n", st.name);
    printf("Points: %d\n", st.age);
  }



3)// passing structure of array to function
#include <stdio.h>
// student structure
struct student {
  int roll;
  char name[64];
  int age;
};
// function declaration
void displayDetail(struct student s);
int main(void) {
  struct student std;
  printf("Enter detail of student\n");
    printf("Enter RollNo: ");
    scanf("%d", &std.roll);
    printf("Enter name: ");
    scanf("%s", std.name);
    printf("Enter age: ");
    scanf("%d", &std.age);
  displayDetail(std);
  return 0;
}
// function definition
void displayDetail(struct student st) {
    printf("Detail of student\n");
    printf("Roll No.: %d\n", st.roll);
    printf("Name: %s\n", st.name);
    printf("Points: %d\n", st.age);
  }
