#include<stdio.h>
#include<conio.h>
void main()
{
int in=1, out=0, door, i, count=0;
clrscr();
for(i=out;i>=0;i++)
{
printf("\nenter in/out : ");
scanf("%d",&door);
if(door==in)
count++;
else if(door==out)
{
if(count<=0)
printf("\nNo one in the room");
else
count--;
}
printf("\nThe number of people in the room : %d",count);
}
getch();
}
