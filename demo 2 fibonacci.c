#include<stdio.h>
#include<conio.h>
int main()
{
int n, m,i, j;
printf(" ENTER your number for run fibonacci ");
scanf(" %d",&n);
i=0;
j=1;
printf(" %d \n %d \n",i,j);
while ( i+j<= n)

{
m= i+j;
printf(" %d\n\n",m);
i=j;
j=m;
}
return 0 ;
}
