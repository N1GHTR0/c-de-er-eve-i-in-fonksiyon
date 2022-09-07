#include <stdio.h>

void    cokfonklucerceve(char ilk, char orta, char son,char dikleme, int x, int y)
{
    int i = 0;
    int j = 0;
    if (x > 0 && y > 0)
    {
        printf("%c", ilk);
        while(x-2 > i)
        {
            printf("%c", orta);
            i++;
        }
        if (y > 1)
        {
            printf("%c", son);
        }
        printf("\n");
        while(y-2 > j)
        {
            i = 0;
            printf("%c", dikleme);
            while (x-2 > i)
            {
                printf(" ");
                i++;
            }
            printf("%c\n", dikleme);
            j++;
        }
        i = 0;
        if (y > 1)
        {
            printf("%c", ilk);
            while(x-2 > i)
            {
                printf("%c", orta);
                i++;
            }
            printf("%c", son);
        }
    }
}