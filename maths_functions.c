#include <stdio.h>
 
int main()
{
int a=0,b=0,sum=0;    		
printf("Enter two numbers with min being 1 and max 5..."); 
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);      
if (a > b && a > c && a > d && a > e)                 
printf("The max is %d",a); 
else if (b > a && b > c && b > d && b > e) 
printf("The max is %d",b);
else if (c > a && c > b && a > d && a > e)                 
printf("The max is %d",c); 
else if (d > a && d > b && d > c && d > e) 
printf("The max is %d",d);
else
printf("The max is %d",e);
return 0;
}
