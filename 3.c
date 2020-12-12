#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of three number");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c)
{
printf("%d is small",a);
}
else if(b<a&&b<c)
{
printf("%d is small",b);
}else
{
printf("%d is small",c);
}
return 0;
}


	
