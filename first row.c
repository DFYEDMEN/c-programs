#include<stdio.h>
#include<conio.h>
void main()
{
int r,co,i,j,a[5][5],rsum=0;
clrscr();
printf("enter the number of rows: ");
scanf("%d",&r);
printf("enter the number of columns: ");
scanf("%d",&co);

printf("enter the elements of the array: ");
for(i=0;i<r;i++){
for(j=0;j<co;j++){
scanf("%d",&a[i][j]);
}}
printf("elements of the matrix are:\n ");
for(i=0;i<=r;i++){
for(j=0;j<co;j++){
printf("%d\t",a[i][j]);
}
printf("\n\n\n");
}

for(i=0;i<=r;i++){
for(j=0;j<co;j++){
if(i==0){
rsum=rsum+a[i][j];
}
}
printf("sum of the rows 1 of the array is:%d",rsum);
getch();
}}
