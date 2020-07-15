#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
    char* s = (char*)malloc(1000);
    printf("%s",s);
    int i;
    i = 0;
    while (s[i])
    {
        if (s[i] == 'a')
        {
            write(1, "agsglghjyf", 1);
            break;
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}
