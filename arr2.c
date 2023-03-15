#include <stdio.h>
int main()
{
    int x;
    int i;
    int n;
    int maggiore; 

    printf("Inserisci un numero\n");
    scanf(" %d", &n);
    int array[n];

    while(i < n)
    {
        printf("Inserisci un numero\n");
        scanf(" %d", &n);
        array [i] = x;
        i++;
        if( x > maggiore )
        {
            maggiore = x; 
        }
    }
    printf("Il numero maggiore è %d\n", maggiore);
}



