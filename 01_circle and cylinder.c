//calculate the area of a circle and modify the same program to calculatev
//the volume of a cylinder given its r=3 and h=3

// note  area of circle is pi r square
//     volume of a cylinder is pi r square h

#include <stdio.h>

int main()
{
	int r=3 , h=3; //declaring variable of int
	float pi=3.14; //declaring variable of float
	
	printf("The area of a circle is: %f\n", pi *r*r);
	printf("the area of a cylinder is : %f\n", pi*r*r*h);
	
	
	return 0;
}
