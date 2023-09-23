// C Program to check whether a number is even or odd
#include<stdio.h>

#include<stdio.h>

int main()
{
	int n;
	printf("enter the number: \n");
	scanf("%d", &n);
	
	if(n%2==0)
	{
		printf("%d is even \n" ,n);
	}else{
		printf("%d is odd \n", n);
	}
	return 0;
}
