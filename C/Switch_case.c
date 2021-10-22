#include<stdio.h>

int main(void){
    int weekday;
    printf("\nENTER WEEKDAY: ");
    scanf("%d", &weekday);

    switch(weekday){
        case 1: printf("\nSunday"); break;
        case 2: printf("\nMonday"); break;
        case 3: printf("\nTuesday"); break;
        case 4: printf("\nWednesday"); break;
        case 6: printf("\nFriday"); break;
        case 7: printf("\nSaturday"); break;
        case 5: printf("\nThursday"); break;
        default: printf("\nEnter Valid Input");
    }
