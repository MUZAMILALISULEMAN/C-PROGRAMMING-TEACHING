#include<stdio.h>
int main(){

    int number1;
    int number2;
    
    printf("enter the number 1: ");
    scanf("%i",&number1);
    printf("enter the number 2; ");
    scanf("%i",&number2);
    
if(number1%number2==0){
    printf("divisiable number");
}else{
    printf("not divisiable");
}
return 0;
}