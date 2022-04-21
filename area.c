#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,n;
    scanf("%d %d",&m,&n);
    if((m*n)%2==0)
        printf("%d",(m*n)/2);
    else
        printf("%d",((m*n)/2)+1);
    return 0;
}