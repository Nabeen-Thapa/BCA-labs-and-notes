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
    printf("\nEnter name: ");
    scanf("%s", std.name);
    printf("\nEnter age: ");
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
