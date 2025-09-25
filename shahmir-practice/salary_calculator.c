
#include <stdio.h>
int main() 
{
 float BasicSalary,Allowance,Deduction;
 float GrossPay,NetPay;
 
 printf("Enter Basic Salary\n");
 scanf("%f",&BasicSalary);
 
 printf("Enter Allowance\n");
 scanf("%f",&Allowance);
 
 printf("Enter Deduction\n");
 scanf("%f",&Deduction);
 
 GrossPay = BasicSalary + Allowance;
 
 NetPay = GrossPay - Deduction;
 
 printf("Gross Pay = %.2f\n",GrossPay);
 printf("Net Pay = %.2f\n",NetPay);

    return 0;
}
