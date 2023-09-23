#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning shreya\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon shreya\n");
    goodNight();
}

void goodNight(){
    printf("Good Night shreya\n");
}
