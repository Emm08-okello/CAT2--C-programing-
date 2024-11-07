#include <stdio.h>

struct employee

{

char name [25];

int id;

char department [20];

float salary;

char email [50];

} employeeA;



int main ()

{

struct employee employeeA = { "John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};

printf("name: %s\n", employeeA.name); 

 printf("id: %d\n", employeeA.id); 

 printf("department: %s\n", employeeA .department); 

 printf("salary: $%.2f\n", employeeA.salary); 

 printf("email: %s\n", employeeA.email);



return 0;

}