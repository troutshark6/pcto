#include <stdio.h>
int main()
{
    int anno;
    printf("Inserisci un anno\n");
    scanf("%d", &anno);
    if (anno % 400 == 0)
    {
        printf("L'anno è bisestile\n");
    }
    else if (anno % 4 == 0 && anno % 100 != 0)
    printf("L'anno è bisestil\n");
    else 
    {
        printf("L'anno non è bisestile\n");
    }

}