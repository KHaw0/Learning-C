#include <stdio.h>
int main (){
   float income_week,income_month,bonus, income_year;
   char name[20];
   printf("name:");
   scanf("%s",&name);
   printf("income week:");
   scanf("%f",&income_week);
   income_month=(float)income_week*4;
   income_year=income_month*12;

   if(income_month*(10.25/100)<=30000){

       bonus=income_year*(1.75/100);
       printf("Income year = %d\n",(int)income_year);
       printf("bonus=%.2f",bonus);
   }
   else
   {

       bonus=income_year*(0.75/100);
       printf("Income year = %d\n",(int)income_year);
       printf("bonus=%.2f",bonus);
   }
return 0;
}
