#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[100],n,b,c,s,d;
clrscr();
printf("enter the size of the array: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("enter the elements of the array: ");
scanf("\n%d",&a[i]);
}
b=a[0];
for(i=0;i<=n;i++){
if(a[i]>b){
b=a[i];  }}
printf("the biggest no. of the array is : %d",b);

c=a[0];
for(i=0;i<=n;i++){
if(a[i]<=c){

c=a[i];}
}
printf("\nthe minimum number of the array is: %d",c);
s=b+c;
d=b-c;

printf("\nthe sum of minimum and maximum is: %d",s);
printf("\nthe difference of minimum and maximum is: %d",d);
getch();
}
Footer
