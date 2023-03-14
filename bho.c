#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Inserisci tre numeri\n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);
    if (c-b == b-a)
    {
        printf(" %d, %d e %d sono in progressine\n", a, b, c);
    }
    else 
    {
        printf(" %d, %d e %d non sono in progressione\n", a, b, c);
    }
}