#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int num,onum,r,res,a;
clrscr();
printf("enter the number to sum: ");
scanf("%d",&num);
onum=num;

while(onum!=0){
r=onum%10;
res=res+(r*r*r);
onum/=10;
}
printf("%d",res);
getch();
}
Footer
