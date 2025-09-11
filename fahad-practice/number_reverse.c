#include<stdio.h>
int main(){
//print 341
int num;
printf("_ENTER 3-DIGIT NUMBER_\n");
scanf("_____%d_____",&num);
int x = num%10;
num = num/10;
int y=num%10;
int z=num/10;
//printf("%i%i%i",x,y,z);	
int a=x*100;
int b=y*10;
int c=z;
int k;
k=a+b+c;
printf("%i",k);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}