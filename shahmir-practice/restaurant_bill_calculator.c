#include<stdio.h>
int main(){
printf("menu\n");
printf("burger----------360\n");
printf("pizza-----------1200\n");
printf("roll------------150\n");
printf("samosa----------30\n");
int burger;
int pizza ;
int roll ;
int samosa;
printf("how many burgers: ");
scanf("%i",&burger);
printf("how many pizza: ");
scanf("%i",&pizza);
printf("how many roll: ");
scanf("%i",&roll);
printf("how many samosa: ");
scanf("%i",&samosa);
printf("burger bill: %i\n",burger*360);
printf("pizza bill: %i\n",pizza*1200);
printf("roll bill: %i\n",roll*150);
printf("samosa bill:%i\n",samosa*30);
printf("total bill: %i\n",burger*360+pizza*1200+roll*150+samosa*30);
return 0;
}