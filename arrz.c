
#include <stdio.h>
int main()
{
    int x;
    int i = 0;
    int n;
    int maggiore; 
    int minore;

    printf("Inserisci un numero\n");
    scanf(" %d", &n);
    int array[n];

    while(i < n)
    {
        printf("Inserisci un numero\n");
        scanf(" %d", &x);
        if ( i == 0)
        {
            maggiore = x;
        }

        array [i] = x;
        i++;
        if( x > maggiore )
        {
            maggiore = x; 
        }
        if ( x < minore )
        {
            minore = x;
        }
    }
    printf("Il numero maggiore è %d\n", maggiore);
    printf("Il numero minore è %d\n", minore);
    
}