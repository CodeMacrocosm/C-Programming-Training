//write a program to convert celcius to faranheit

// °C to °F	     Divide by 5, then multiply by 9, then add 32
//°F to °C	     Deduct 32, then multiply by 5, then divide by 9

#include<stdio.h>

int main(){
    float c = 37, f;
    f = (c * 9 / 5) + 32;
    printf("The value of this celsius temperature in Fahrenheit is %f", f);
    return 0;
}
