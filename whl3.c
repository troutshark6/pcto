#include <stdio.h>
int main()
{

    int x = 0;
    int y = 0;
    while(x < 100)
    {
        x = x + 2;
        y = y + x; 
    }
    printf("%d\n", y);

}