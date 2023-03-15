#include <stdio.h>
int main()
{
    int x, y, z;
    x = 0;
    y = 0;
    z = 0;
    int media;
    while (x >= 0)
    {
        printf("Inserisci un numero\n");
        scanf(" %d", &x);
        z = z + 1;
        y = y + x;
        media = y / z;
        {
            printf("La media è %d\n", media);
        }
    } 
}