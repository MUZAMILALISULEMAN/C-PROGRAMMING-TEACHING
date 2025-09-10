#include<stdio.h>
int main(){

    int num2 = 153;
    int num = 153;
    int x = num%10;
    num = num/10;
    int y = num%10;
    int z = num/10;
    int answer = (x*x*x)+(y*y*y)+(z*z*z);
    printf("if answer is 0 then it is cuboid: %i\n",answer-num2);

    return 0;
}