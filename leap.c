#include<stdio.h>
#include<conio.h>
int main()
{
int year,b;
printf("\n enter the year:");
scanf("%d",&year);
if((year%4==0)==(year%400==0))
{

    printf("\n this year is a leap year");
}
else{
        printf("\n this year is not a leap year");
}
return 0;
}
