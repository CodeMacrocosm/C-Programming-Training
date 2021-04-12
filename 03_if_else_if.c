#include<stdio.h>

int main(){
    int num;

    printf("Enter your number\n");
    scanf("%d", &num);

    if(num==1){
        printf("Your number is 1\n");
    }
    else if (num == 2)
    {
        printf("Your number is 2\n");
    }
    else if (num == 3)
    {
        printf("Your number is 3\n");
    }
    else{
        printf("Its not 1, 2 or 3!\n");
    }
     

    return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int num;
//	printf("enter the number: \n");
//	scanf("%d, &num");
//	
//	if(num==1)
//	{
//		printf("your number is 1 \n");
//	}
//	else if(num==2)
//	{
//		printf("your number is 2 \n");
//	}
//	else if(num==3)
//	{
//		printf("your number is 3\n");
//	}
//	else{
//		printf("your number is neither 1 or 2 or 3");
//	}
//	return 0;
//}
