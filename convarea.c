#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float tractLand;
    scanf("%f",&tractLand);
    printf("%0.2f",tractLand);
    printf(" sq.ft is equal to %0.2f",tractLand/43560);
    printf(" acres");
    return 0;
}
