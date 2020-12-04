#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers to be swapped :\n");
	scanf("%d%d",&x,&y);
	printf("The values before swapping:\nx = %d \ny = %d\n",x,y);
	x += y;
	y = x - y;
	x -= y;
	printf("The values after swapping:\nx = %d \ny = %d",x,y);
	return 0;
}
