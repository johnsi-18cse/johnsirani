#include<stdio.h>
#include<conio.h>
void main()
{
char ch,a,Z,A,z;
printf("\n enter the char");
scanf("%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
printf("\n alphabet %c",ch);
else
printf("\n not alphabet %c",ch);
getch();
}
