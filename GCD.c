#include<stdio.h>
int main ()
{
int num1, num2, n1, n2, rem , GCD, LCM;

printf(" enter Two number \n");
scanf("%d %d", &num1, &num2);
n1=num1;
n2= num2;
while(n2!=0)
{
rem = n1 % n2;
n1=n2;
n2=rem;
}
GCD = n1;
printf( " GCD of %d & %d is = %d \n ", num1, num2, GCD );

LCM = (num1*num2)/GCD ;
printf( " LCM of %d & %d is = %d \n", num1, num2, LCM );


return 0;
}
