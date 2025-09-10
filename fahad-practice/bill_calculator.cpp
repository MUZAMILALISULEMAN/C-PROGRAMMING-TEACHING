#include<stdio.h>
int main(){
printf("MENU");
printf("\nBURGER---------------360");
printf("\nPIZZA----------------1200");
printf("\nROLL-----------------80");
int BURGER;
int PIZZA;
int ROLL;
printf("\nHOW MANY BURGER  ");
scanf("%i",&BURGER);
printf("\nHOW MANY PIZZA   ");
scanf("%i",&PIZZA);
printf("\nHOW MANY ROLL     ");
scanf("%i",&ROLL);
printf("\nBURGER BILL: RS%i",BURGER*360);
printf("\nPIZZA BILL: RS%i",PIZZA*1200);
printf("\nROLL BILL: RS%i",ROLL*80);
float TOTAL= BURGER*360+PIZZA*1200+ROLL*80;
printf("\nTOTAL:  %i",(int)TOTAL);
 
return 0;
}
