//#include<stdio.h>
//
//int main(){
//    int rating;
//    printf("Enter your rating (1-5): \n");
//    scanf("%d", &rating);
//    switch(rating){
//        case 1:
//            printf("Your rating is 1\n");
//            break;
//        case 2:
//            printf("Your rating is 2\n");
//            break;
//        case 3:
//            printf("Your rating is 3\n");
//            break;
//        case 4:
//            printf("Your rating is 4\n");
//            break;
//        case 5:
//            printf("Your rating is 5\n");
//            break;
//        default :
//            printf("Invalid rating!\n");
//            break;
//    }
//
//    return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	printf("enter a rating between 1-5: \n");
	scanf("%d", &n);
	
	switch(n){
	case 1:
		printf("your rating is 1");
		break;
	case 2:
		printf("your rating is 2");
		break;
	case 3:
		printf("your rating is 3");
		break;
	case 4:
		printf("your rating is 4");
		break;
	case 5:
		printf("your rating is 5");
		break;	
	default:
		printf("invalid rating");
		break;
	return 0;
	}

}
