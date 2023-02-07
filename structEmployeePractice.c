#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Employee
{
    /* data */
   char name[20];
   char hireDate[10];
   float salary;
    

};


int main()
{

struct Employee Bob;

strcpy(Bob.name, "Bob");
strcpy(Bob.hireDate, "12/01/23");
Bob.salary = 39873.69;


    printf("Person information:\n");
    printf("Name: %s\n", Bob.name);
    printf("Hire Date: %s\n", Bob.hireDate);
    printf("Salary: $%.2f\n", Bob.salary);
  
  return 0;
}