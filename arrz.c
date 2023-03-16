
#include <stdio.h>
int main()
{
    int x;
    int i = 0;
    int n;
    int maggiore; 

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
    }
    printf("Il numero maggiore è %d\n", maggiore);
}