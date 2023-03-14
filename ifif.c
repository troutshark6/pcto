#include <stdio.h>

int main()
{
    char sesso;

    printf("Qual è il tuo sesso?\nM (maschio) | F (femmina) | N (altro): ");
    scanf(" %c", &sesso);
    if(sesso == 'M') 
    {
        printf("Sei un macshio ");
    }
    else if (sesso == 'F')
    {
        printf("Sei una femmina ");
    }
    else if (sesso == 'N')
    {
        printf("Sei di un altro sesso ");

    }
    else 
    {
        printf("errore");
    }

}