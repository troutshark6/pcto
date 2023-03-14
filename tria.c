#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Inserisci tre numeri\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a )
    {
        printf("I numeri possono essere i lati di un triangolo\n");
    }
        if (a == b && b == c && c == a)
        {
             printf("Il triangolo è equilatero\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Il triangolo è isoscele\n");
        }
        else 
        {
            printf("Il triangolo è scaleno\n");
        }
        else 
        {
            printf("I numeri non possono essere le lunghezze dei lati di un triangolo\n");
        }
}