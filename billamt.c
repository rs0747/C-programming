#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int amtgiven,billamt;
    scanf("%d\n%d",&amtgiven,&billamt);
    printf("Quotient:%d",(amtgiven/billamt));
    printf("\nRemainder:%d",(amtgiven%billamt));
    return 0;
}
