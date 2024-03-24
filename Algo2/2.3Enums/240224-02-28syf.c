#include <stdio.h>

enum month_list {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

typedef enum month_list months;

void writeMonthName(months);

int main(void) {
    months thisMonth = June; 
    printf("Month %d is:", thisMonth); 
    writeMonthName(thisMonth);
    return 0;
}

void writeMonthName(months nameOfMonth) {  printf(" %d", nameOfMonth);
    switch (nameOfMonth) {
        case January:         printf(" January\n");            break;
        case February:            printf(" February\n");            break;
        case March:            printf(" March\n");            break;
        case April:            printf(" April\n");            break;
        case May:            printf(" May\n");            break;
        case June:            printf(" June\n");            break;
        case July:            printf(" July\n");            break;
        case August:            printf(" August\n");            break;
        case September:            printf(" September\n");            break;
        case October:            printf(" October\n");            break;
        case November:            printf(" November\n");            break;
        case December:            printf(" December\n");            break;
        default:            printf(" Invalid month\n");            break;
    }}