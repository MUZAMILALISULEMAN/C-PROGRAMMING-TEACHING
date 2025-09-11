#include<stdio.h>;
int main(){
	
int num,temp,x,y,z,sum;
printf("__ENTER A 3-DIGIT NUMBER:__");
scanf("%d",&num);
temp=num;
x=num%10;   //third digit 
num=num/10;
y=num%10;   //second digit
z=num/10;   //third digit

sum=(x*x*x)+(y*y*y)+(z*z*z);
if (sum==temp) {
	printf("_TRUE CUBOID_\n");
}else {
    printf("_FALSE NON-CUBOID_\n");
}
	
return 0;
}