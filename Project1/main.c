#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year1,month1,day1;
   int year2,month2,day2;
   int year3,month3,day3;
   int year4,month4,day4;
   int year5,month5,day5;
   int heartRate1,minRange1,maxRange1;
   int heartRate2,minRange2,maxRange2;
   int heartRate3,minRange3,maxRange3;
   int heartRate4,minRange4,maxRange4;
   int heartRate5,minRange5,maxRange5;
   printf("Enter Dates of Birth in the format DD/MM/YYYY\n");
   printf("Person1: ");
   scanf("%d/%d/%d",&day1,&month1,&year1);
   int age1=2018-year1;
   heartRate1=220-age1;
   minRange1=0.5*heartRate1;
   maxRange1=0.85*heartRate1;

   printf("Person2: ");
   scanf("%d/%d/%d",&day1,&month1,&year1);
   int age2=2018-year1;
   heartRate2=220-age2;
   minRange2=0.5*heartRate2;
   maxRange2=0.85*heartRate2;

   printf("Person3: ");
   scanf("%d/%d/%d",&day1,&month1,&year1);
   int age3=2018-year1;
   heartRate3=220-age3;
   minRange3=0.5*heartRate3;
   maxRange3=0.85*heartRate3;

   printf("Person4: ");
   scanf("%d/%d/%d",&day1,&month1,&year1);
   int age4=2018-year1;
   heartRate4=220-age4;
   minRange4=0.5*heartRate4;
   maxRange4=0.85*heartRate4;

   printf("Person5: ");
   scanf("%d/%d/%d\n",&day1,&month1,&year1);
   int age5=2018-year1;
   heartRate5=220-age5;
   minRange5=0.5*heartRate5;
   maxRange5=0.85*heartRate5;

   printf("Persons Age(yrs)\t\tMax Heart Rate\t\tTarget heart-rate Range\n");
   printf("%d\t\t\t\t%d\t\t\t\t%d-%d\n",age1,heartRate1,minRange1,maxRange1);
   printf("%d\t\t\t\t%d\t\t\t\t%d-%d\n",age2,heartRate2,minRange2,maxRange2);
   printf("%d\t\t\t\t%d\t\t\t\t%d-%d\n",age3,heartRate3,minRange3,maxRange3);
   printf("%d\t\t\t\t%d\t\t\t\t%d-%d\n",age4,heartRate4,minRange4,maxRange4);
   printf("%d\t\t\t\t%d\t\t\t\t%d-%d\n",age5,heartRate5,minRange5,maxRange5);
   return 0;
}

