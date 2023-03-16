#include <stdio.h>
int main()
{
    char stringa[]="";
    int i = 0;

    printf("Scrivi una stringa\n");
    scanf("%s", stringa);
    while ( stringa[i] != '\0') 
    {
    i++;
    }
    printf("La stringa è lunga %d\n", i);
    return 0;
}