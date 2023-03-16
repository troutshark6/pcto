#include <stdio.h>
int main()
{
    char stringa[]="";
    int i = 0;

    printf("Scrivi una stringa\n");
    scanf(" %s\n", stringa);
    printf(" %d\n", i);
    while (stringa[i] != '\0') 
    {
        i++;
    }
    i--;
    int j = 0;
    char c; 
    while(j < i)
    {
        c = stringa[j];
        stringa[j]=stringa[i];
        stringa[i] = c;
        i--;
        j++;
    }
   printf(" %s\n", stringa);
   printf("\n");
}