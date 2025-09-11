#include<stdio.h>
int main(){
    //print => 341;
    

    int number;
    printf("enter the 4 digit number\n");
    scanf("%i",&number);

    int x = number%10;
    number = number/10;
    int y = number%10;
    number = number/10;
    int z = number%10;
    number = number/10;
    int t = number%10;


    // printf("%i",x);
    // printf("%i",y);
    // printf("%i",z);

    int a = x*1000;
    int b = y*100;
    int c = z*10;
    int d = t;
    int k = a+b+c+d;
printf("%i",k);





return 0;
}