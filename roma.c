#include <stdio.h>

int main()
{
    int età;
    printf("Quanti anni hai?\n");
    scanf(" %d", &età);
    printf("I tuoi anni sono: %d ", età);
    if(età > 18)
    {
        printf("Sei maggiorenne\n");
    }
    else 
    {
        printf("Non sei maggiorenne\n");
    }

}