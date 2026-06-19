#include <stdio.h>
// #include <string.h>
int main(){
int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[20] = "";
printf("Enter your age:");
scanf("%d", &age);

printf("Enter your GPA:");
scanf("%f", &gpa);
printf("Enter your grade:");
scanf(" %c", &grade); // note the space before %c to consume any leftover

getchar();
printf("Enter your name:");
fgets(name, sizeof(name), stdin); // no need for & when reading strings with fgets
printf("Your name is: %s", name);
return 0;
printf("Your age is: %d\n", age);
printf("Your GPA is: %.2f\n", gpa);
printf("Your grade is: %c\n", grade);
}