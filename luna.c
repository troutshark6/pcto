#include <stdio.h>
int main()
{
    int nascita;

    printf("Qual è il tuo anno di nascita?\n");
    scanf(" %d", &nascita);
    if ( nascita == 1969 )
    {
        printf("Sei nato lo stesso anno del primo allunaggio\n");
    }
    else if ( nascita > 1969 )
    {
        printf("Sei nato %d anni dopo il primo allunaggio\n", nascita-1969);
    }
    else 
    {
        printf("Sei nato %d anni prima del primo allunaggio\n", 1969-nascita);
    }
}