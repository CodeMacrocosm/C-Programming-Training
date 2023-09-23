// avg of 3 nos using func hardcoded inputs

#include<stdio.h>

int avg(int a , int b, int c)
{
	int d;
	d= (a+b+c)/3;
	printf("The average of 3 numbers is: %d\n ", d);
	return d;
}

int main()
{
	int d;
	d=avg(2,3,2);
	return 0;
}
