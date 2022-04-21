#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float distkm,distin,distft;
    scanf("%f",&distkm);
    distin=distkm*39370.10;
    distft=distkm*3280.84;
    printf("%0.2f",(distkm*1000));
    printf(" m\n");
    printf("%0.2f",distft);
    printf(" ft\n");
    printf("%0.2f",distin);
    printf(" in\n");
    printf("%0.2f",(distkm*100000));
    printf(" cm");
    return 0;
}
